// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "TreeViewItem.h"
#include "common.h"

CppWinRTActivatableClassWithDPFactory(TreeViewItem)

GlobalDependencyProperty TreeViewItemProperties::s_CollapsedGlyphProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_ExpandedGlyphProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_GlyphBrushProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_GlyphOpacityProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_GlyphSizeProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_HasUnrealizedChildrenProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_IsExpandedProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_ItemsSourceProperty{ nullptr };
GlobalDependencyProperty TreeViewItemProperties::s_TreeViewItemTemplateSettingsProperty{ nullptr };

TreeViewItemProperties::TreeViewItemProperties()
{
    EnsureProperties();
}

void TreeViewItemProperties::EnsureProperties()
{
    if (!s_CollapsedGlyphProperty)
    {
        s_CollapsedGlyphProperty =
            InitializeDependencyProperty(
                L"CollapsedGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxValueIfNecessary(L"\uE76C"),
                nullptr);
    }
    if (!s_ExpandedGlyphProperty)
    {
        s_ExpandedGlyphProperty =
            InitializeDependencyProperty(
                L"ExpandedGlyph",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxValueIfNecessary(L"\uE70D"),
                nullptr);
    }
    if (!s_GlyphBrushProperty)
    {
        s_GlyphBrushProperty =
            InitializeDependencyProperty(
                L"GlyphBrush",
                winrt::name_of<winrt::Brush>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::Brush>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_GlyphOpacityProperty)
    {
        s_GlyphOpacityProperty =
            InitializeDependencyProperty(
                L"GlyphOpacity",
                winrt::name_of<double>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(1.0),
                nullptr);
    }
    if (!s_GlyphSizeProperty)
    {
        s_GlyphSizeProperty =
            InitializeDependencyProperty(
                L"GlyphSize",
                winrt::name_of<double>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<double>::BoxValueIfNecessary(12.0),
                nullptr);
    }
    if (!s_HasUnrealizedChildrenProperty)
    {
        s_HasUnrealizedChildrenProperty =
            InitializeDependencyProperty(
                L"HasUnrealizedChildren",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnHasUnrealizedChildrenPropertyChanged));
    }
    if (!s_IsExpandedProperty)
    {
        s_IsExpandedProperty =
            InitializeDependencyProperty(
                L"IsExpanded",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIsExpandedPropertyChanged));
    }
    if (!s_ItemsSourceProperty)
    {
        s_ItemsSourceProperty =
            InitializeDependencyProperty(
                L"ItemsSource",
                winrt::name_of<winrt::IInspectable>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::IInspectable>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnItemsSourcePropertyChanged));
    }
    if (!s_TreeViewItemTemplateSettingsProperty)
    {
        s_TreeViewItemTemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TreeViewItemTemplateSettings",
                winrt::name_of<winrt::TreeViewItemTemplateSettings>(),
                winrt::name_of<winrt::TreeViewItem>(),
                false /* isAttached */,
                ValueHelper<winrt::TreeViewItemTemplateSettings>::BoxedDefaultValue(),
                nullptr);
    }
}

void TreeViewItemProperties::ClearProperties()
{
    s_CollapsedGlyphProperty = nullptr;
    s_ExpandedGlyphProperty = nullptr;
    s_GlyphBrushProperty = nullptr;
    s_GlyphOpacityProperty = nullptr;
    s_GlyphSizeProperty = nullptr;
    s_HasUnrealizedChildrenProperty = nullptr;
    s_IsExpandedProperty = nullptr;
    s_ItemsSourceProperty = nullptr;
    s_TreeViewItemTemplateSettingsProperty = nullptr;
}

void TreeViewItemProperties::OnHasUnrealizedChildrenPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TreeViewItem>();
    winrt::get_self<TreeViewItem>(owner)->OnPropertyChanged(args);
}

void TreeViewItemProperties::OnIsExpandedPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TreeViewItem>();
    winrt::get_self<TreeViewItem>(owner)->OnPropertyChanged(args);
}

void TreeViewItemProperties::OnItemsSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::TreeViewItem>();
    winrt::get_self<TreeViewItem>(owner)->OnPropertyChanged(args);
}

void TreeViewItemProperties::CollapsedGlyph(winrt::hstring const& value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_CollapsedGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TreeViewItemProperties::CollapsedGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_CollapsedGlyphProperty));
}

void TreeViewItemProperties::ExpandedGlyph(winrt::hstring const& value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_ExpandedGlyphProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring TreeViewItemProperties::ExpandedGlyph()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_ExpandedGlyphProperty));
}

void TreeViewItemProperties::GlyphBrush(winrt::Brush const& value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_GlyphBrushProperty, ValueHelper<winrt::Brush>::BoxValueIfNecessary(value));
}

winrt::Brush TreeViewItemProperties::GlyphBrush()
{
    return ValueHelper<winrt::Brush>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_GlyphBrushProperty));
}

void TreeViewItemProperties::GlyphOpacity(double value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_GlyphOpacityProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double TreeViewItemProperties::GlyphOpacity()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_GlyphOpacityProperty));
}

void TreeViewItemProperties::GlyphSize(double value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_GlyphSizeProperty, ValueHelper<double>::BoxValueIfNecessary(value));
}

double TreeViewItemProperties::GlyphSize()
{
    return ValueHelper<double>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_GlyphSizeProperty));
}

void TreeViewItemProperties::HasUnrealizedChildren(bool value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_HasUnrealizedChildrenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TreeViewItemProperties::HasUnrealizedChildren()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_HasUnrealizedChildrenProperty));
}

void TreeViewItemProperties::IsExpanded(bool value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_IsExpandedProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool TreeViewItemProperties::IsExpanded()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_IsExpandedProperty));
}

void TreeViewItemProperties::ItemsSource(winrt::IInspectable const& value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_ItemsSourceProperty, ValueHelper<winrt::IInspectable>::BoxValueIfNecessary(value));
}

winrt::IInspectable TreeViewItemProperties::ItemsSource()
{
    return ValueHelper<winrt::IInspectable>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_ItemsSourceProperty));
}

void TreeViewItemProperties::TreeViewItemTemplateSettings(winrt::TreeViewItemTemplateSettings const& value)
{
    static_cast<TreeViewItem*>(this)->SetValue(s_TreeViewItemTemplateSettingsProperty, ValueHelper<winrt::TreeViewItemTemplateSettings>::BoxValueIfNecessary(value));
}

winrt::TreeViewItemTemplateSettings TreeViewItemProperties::TreeViewItemTemplateSettings()
{
    return ValueHelper<winrt::TreeViewItemTemplateSettings>::CastOrUnbox(static_cast<TreeViewItem*>(this)->GetValue(s_TreeViewItemTemplateSettingsProperty));
}
