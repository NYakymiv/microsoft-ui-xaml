﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once
#include "TreeViewCollapsedEventArgs.h"
#include "TreeViewDragItemsCompletedEventArgs.h"
#include "TreeViewDragItemsStartingEventArgs.h"
#include "TreeViewExpandingEventArgs.h"
#include "TreeViewItemInvokedEventArgs.h"
#include "TreeViewList.h"
#include "TreeViewNode.h"

#include "TreeView.g.h"
#include "TreeView.properties.h"

class TreeView :
    public ReferenceTracker<TreeView, winrt::implementation::TreeViewT>,
    public TreeViewProperties
{
public:
    TreeView();
    winrt::IVector<winrt::TreeViewNode> RootNodes();
    TreeViewList* ListControl();

    winrt::IInspectable ItemFromContainer(winrt::DependencyObject const& container);
    winrt::DependencyObject ContainerFromItem(winrt::IInspectable const& item);
    winrt::TreeViewNode NodeFromContainer(winrt::DependencyObject const& container);
    winrt::DependencyObject ContainerFromNode(winrt::TreeViewNode const& node);

    winrt::IVector<winrt::TreeViewNode> SelectedNodes();
    void Expand(winrt::TreeViewNode const& value);
    void Collapse(winrt::TreeViewNode const& value);
    void SelectAll();

    void OnItemClick(const winrt::IInspectable& sender, const winrt::ItemClickEventArgs& args);
    void OnContainerContentChanging(const winrt::IInspectable& sender, const winrt::ContainerContentChangingEventArgs& args);
    void OnNodeExpanding(const winrt::TreeViewNode& sender, const winrt::IInspectable&);
    void OnNodeCollapsed(const winrt::TreeViewNode& sender, const winrt::IInspectable&);
    void OnListControlDragItemsStarting(const winrt::IInspectable& sender, const winrt::DragItemsStartingEventArgs& args);
    void OnListControlDragItemsCompleted(const winrt::IInspectable& sender, const winrt::DragItemsCompletedEventArgs& args);
    void OnPropertyChanged(const winrt::DependencyPropertyChangedEventArgs& args);
    void UpdateItemsSelectionMode(bool isMultiSelect);

private:
    static void OnPropertyChanged(const winrt::DependencyObject& sender, const winrt::DependencyPropertyChangedEventArgs& args);

    winrt::ItemsSourceView m_itemsDataSource{ nullptr };
    winrt::ItemsSourceView::CollectionChanged_revoker m_itemItemsSourceViewChangedRevoker{};
    void OnItemsSourceChanged(const winrt::IInspectable& sender, const winrt::NotifyCollectionChangedEventArgs& args);
    void SyncRootNodesWithItemsSource();
    void OnItemsAdded(int index, int count);
    void OnItemsRemoved(int index, int count);

public:
    // IFrameworkElementOverrides
    void OnApplyTemplate();

private:
    tracker_ref<winrt::TreeViewNode> m_rootNode{ this };
    tracker_ref<winrt::TreeViewList> m_listControl{ this };
    // SelectedNodes vector is initialized in OnApplyTemplate, if developers try to update SelectedNodes in page constructor they'll get an exception since the vector is not ready.
    // This pendingSelectedNodes is to temporarily hold the content before SelectedNodes is ready. It gets copied over and cleared in OnApplyTemplate.
    tracker_ref<winrt::IVector<winrt::TreeViewNode>> m_pendingSelectedNodes{ this };

    event_source<winrt::TypedEventHandler<winrt::ListViewBase, winrt::ContainerContentChangingEventArgs>> m_containerContentChangedSource{ this };

    winrt::ListViewBase::ItemClick_revoker m_itemClickRevoker{};
    winrt::ListViewBase::ContainerContentChanging_revoker m_containerContentChangingRevoker{};
    winrt::ListViewBase::DragItemsStarting_revoker m_dragItemsStartingRevoker{};
    winrt::ListViewBase::DragItemsCompleted_revoker m_dragItemsCompletedRevoker{};
};