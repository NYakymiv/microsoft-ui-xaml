﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "FlowLayoutAlgorithm.h"
#include "ItemsRepeater.common.h"
#include "StackLayoutState.h"
#include <common.h>
#include <pch.h>

CppWinRTActivatableClassWithBasicFactory(StackLayoutState);

void StackLayoutState::InitializeForContext(
    const winrt::VirtualizingLayoutContext&  /*context*/,
    IFlowLayoutAlgorithmDelegates* callbacks)
{
    m_flowAlgorithm.InitializeForContext(context, callbacks);
    if (m_estimationBuffer.size() == 0)
    {
        m_estimationBuffer.resize(BufferSize, 0.0f);
    }

    context.LayoutStateCore(*this);
}

void StackLayoutState::UninitializeForContext(const winrt::VirtualizingLayoutContext& context)
{
    m_flowAlgorithm.UninitializeForContext(context);
}

void StackLayoutState::OnElementMeasured(int elementIndex, double majorSize, double minorSize)
{
    int estimationBufferIndex = elementIndex % m_estimationBuffer.size();
    bool alreadyMeasured = m_estimationBuffer[estimationBufferIndex] != 0;
    if (!alreadyMeasured)
    {
        m_totalElementsMeasured++;
    }

    m_totalElementSize -= m_estimationBuffer[estimationBufferIndex];
    m_totalElementSize += majorSize;
    m_estimationBuffer[estimationBufferIndex] = majorSize;

    m_maxArrangeBounds = std::max(m_maxArrangeBounds, minorSize);
}

void StackLayoutState::OnArrangeLayoutEnd()
{
    m_maxArrangeBounds = 0.0;
}