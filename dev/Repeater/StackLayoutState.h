﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "FlowLayoutAlgorithm.h"
#include "StackLayoutState.g.h"

class StackLayoutState :
    public ReferenceTracker<StackLayoutState, winrt::implementation::StackLayoutStateT, winrt::composing>
{
public:
    void InitializeForContext(
        const winrt::VirtualizingLayoutContext& context,
        IFlowLayoutAlgorithmDelegates* callbacks);
    void UninitializeForContext(const winrt::VirtualizingLayoutContext& context);
    void OnElementMeasured(int elementIndex, double majorSize, double minorSize);
    void OnArrangeLayoutEnd();

    ::FlowLayoutAlgorithm& FlowAlgorithm() { return m_flowAlgorithm; }
    [[nodiscard]] double TotalElementSize() const { return m_totalElementSize; }
    [[nodiscard]] double MaxArrangeBounds() const { return m_maxArrangeBounds; }
    [[nodiscard]] int TotalElementsMeasured() const { return m_totalElementsMeasured; }

private:
    ::FlowLayoutAlgorithm m_flowAlgorithm{ this };
    std::vector<double> m_estimationBuffer{};
    double m_totalElementSize{};
    // During the measure pass, as we measure the elements, we will keep track
    // of the largest arrange bounds in the non-virtualizing direction. This value
    // is going to be used in the calculation of the extent.
    double m_maxArrangeBounds{};
    int m_totalElementsMeasured{};
    static const int BufferSize = 100;
};