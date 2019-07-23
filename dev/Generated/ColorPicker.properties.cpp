// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "ColorPicker.h"
#include "common.h"

CppWinRTActivatableClassWithDPFactory(ColorPicker)

GlobalDependencyProperty ColorPickerProperties::s_ColorProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_ColorSpectrumComponentsProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_ColorSpectrumShapeProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsAlphaEnabledProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsAlphaSliderVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsAlphaTextInputVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsColorChannelTextInputVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsColorPreviewVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsColorSliderVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsColorSpectrumVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsHexInputVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_IsMoreButtonVisibleProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_MaxHueProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_MaxSaturationProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_MaxValueProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_MinHueProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_MinSaturationProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_MinValueProperty{ nullptr };
GlobalDependencyProperty ColorPickerProperties::s_PreviousColorProperty{ nullptr };

ColorPickerProperties::ColorPickerProperties()
    : m_colorChangedEventSource{static_cast<ColorPicker*>(this)}
{
    EnsureProperties();
}

void ColorPickerProperties::EnsureProperties()
{
    if (!s_ColorProperty)
    {
        s_ColorProperty =
            InitializeDependencyProperty(
                L"Color",
                winrt::name_of<winrt::Color>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<winrt::Color>::BoxValueIfNecessary({ 255, 255, 255, 255 }),
                winrt::PropertyChangedCallback(&OnColorPropertyChanged));
    }
    if (!s_ColorSpectrumComponentsProperty)
    {
        s_ColorSpectrumComponentsProperty =
            InitializeDependencyProperty(
                L"ColorSpectrumComponents",
                winrt::name_of<winrt::ColorSpectrumComponents>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<winrt::ColorSpectrumComponents>::BoxValueIfNecessary(winrt::ColorSpectrumComponents::HueSaturation),
                winrt::PropertyChangedCallback(&OnColorSpectrumComponentsPropertyChanged));
    }
    if (!s_ColorSpectrumShapeProperty)
    {
        s_ColorSpectrumShapeProperty =
            InitializeDependencyProperty(
                L"ColorSpectrumShape",
                winrt::name_of<winrt::ColorSpectrumShape>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<winrt::ColorSpectrumShape>::BoxValueIfNecessary(winrt::ColorSpectrumShape::Box),
                winrt::PropertyChangedCallback(&OnColorSpectrumShapePropertyChanged));
    }
    if (!s_IsAlphaEnabledProperty)
    {
        s_IsAlphaEnabledProperty =
            InitializeDependencyProperty(
                L"IsAlphaEnabled",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIsAlphaEnabledPropertyChanged));
    }
    if (!s_IsAlphaSliderVisibleProperty)
    {
        s_IsAlphaSliderVisibleProperty =
            InitializeDependencyProperty(
                L"IsAlphaSliderVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsAlphaSliderVisiblePropertyChanged));
    }
    if (!s_IsAlphaTextInputVisibleProperty)
    {
        s_IsAlphaTextInputVisibleProperty =
            InitializeDependencyProperty(
                L"IsAlphaTextInputVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsAlphaTextInputVisiblePropertyChanged));
    }
    if (!s_IsColorChannelTextInputVisibleProperty)
    {
        s_IsColorChannelTextInputVisibleProperty =
            InitializeDependencyProperty(
                L"IsColorChannelTextInputVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsColorChannelTextInputVisiblePropertyChanged));
    }
    if (!s_IsColorPreviewVisibleProperty)
    {
        s_IsColorPreviewVisibleProperty =
            InitializeDependencyProperty(
                L"IsColorPreviewVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsColorPreviewVisiblePropertyChanged));
    }
    if (!s_IsColorSliderVisibleProperty)
    {
        s_IsColorSliderVisibleProperty =
            InitializeDependencyProperty(
                L"IsColorSliderVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsColorSliderVisiblePropertyChanged));
    }
    if (!s_IsColorSpectrumVisibleProperty)
    {
        s_IsColorSpectrumVisibleProperty =
            InitializeDependencyProperty(
                L"IsColorSpectrumVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsColorSpectrumVisiblePropertyChanged));
    }
    if (!s_IsHexInputVisibleProperty)
    {
        s_IsHexInputVisibleProperty =
            InitializeDependencyProperty(
                L"IsHexInputVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(true),
                winrt::PropertyChangedCallback(&OnIsHexInputVisiblePropertyChanged));
    }
    if (!s_IsMoreButtonVisibleProperty)
    {
        s_IsMoreButtonVisibleProperty =
            InitializeDependencyProperty(
                L"IsMoreButtonVisible",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIsMoreButtonVisiblePropertyChanged));
    }
    if (!s_MaxHueProperty)
    {
        s_MaxHueProperty =
            InitializeDependencyProperty(
                L"MaxHue",
                winrt::name_of<int>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(359),
                winrt::PropertyChangedCallback(&OnMaxHuePropertyChanged));
    }
    if (!s_MaxSaturationProperty)
    {
        s_MaxSaturationProperty =
            InitializeDependencyProperty(
                L"MaxSaturation",
                winrt::name_of<int>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(100),
                winrt::PropertyChangedCallback(&OnMaxSaturationPropertyChanged));
    }
    if (!s_MaxValueProperty)
    {
        s_MaxValueProperty =
            InitializeDependencyProperty(
                L"MaxValue",
                winrt::name_of<int>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(100),
                winrt::PropertyChangedCallback(&OnMaxValuePropertyChanged));
    }
    if (!s_MinHueProperty)
    {
        s_MinHueProperty =
            InitializeDependencyProperty(
                L"MinHue",
                winrt::name_of<int>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(0),
                winrt::PropertyChangedCallback(&OnMinHuePropertyChanged));
    }
    if (!s_MinSaturationProperty)
    {
        s_MinSaturationProperty =
            InitializeDependencyProperty(
                L"MinSaturation",
                winrt::name_of<int>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(0),
                winrt::PropertyChangedCallback(&OnMinSaturationPropertyChanged));
    }
    if (!s_MinValueProperty)
    {
        s_MinValueProperty =
            InitializeDependencyProperty(
                L"MinValue",
                winrt::name_of<int>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(0),
                winrt::PropertyChangedCallback(&OnMinValuePropertyChanged));
    }
    if (!s_PreviousColorProperty)
    {
        s_PreviousColorProperty =
            InitializeDependencyProperty(
                L"PreviousColor",
                winrt::name_of<winrt::IReference<winrt::Color>>(),
                winrt::name_of<winrt::ColorPicker>(),
                false /* isAttached */,
                ValueHelper<winrt::IReference<winrt::Color>>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnPreviousColorPropertyChanged));
    }
}

void ColorPickerProperties::ClearProperties()
{
    s_ColorProperty = nullptr;
    s_ColorSpectrumComponentsProperty = nullptr;
    s_ColorSpectrumShapeProperty = nullptr;
    s_IsAlphaEnabledProperty = nullptr;
    s_IsAlphaSliderVisibleProperty = nullptr;
    s_IsAlphaTextInputVisibleProperty = nullptr;
    s_IsColorChannelTextInputVisibleProperty = nullptr;
    s_IsColorPreviewVisibleProperty = nullptr;
    s_IsColorSliderVisibleProperty = nullptr;
    s_IsColorSpectrumVisibleProperty = nullptr;
    s_IsHexInputVisibleProperty = nullptr;
    s_IsMoreButtonVisibleProperty = nullptr;
    s_MaxHueProperty = nullptr;
    s_MaxSaturationProperty = nullptr;
    s_MaxValueProperty = nullptr;
    s_MinHueProperty = nullptr;
    s_MinSaturationProperty = nullptr;
    s_MinValueProperty = nullptr;
    s_PreviousColorProperty = nullptr;
}

void ColorPickerProperties::OnColorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnColorSpectrumComponentsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnColorSpectrumShapePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsAlphaEnabledPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsAlphaSliderVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsAlphaTextInputVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsColorChannelTextInputVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsColorPreviewVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsColorSliderVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsColorSpectrumVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsHexInputVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnIsMoreButtonVisiblePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnMaxHuePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnMaxSaturationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnMaxValuePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnMinHuePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnMinSaturationPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnMinValuePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::OnPreviousColorPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::ColorPicker>();
    winrt::get_self<ColorPicker>(owner)->OnPropertyChanged(args);
}

void ColorPickerProperties::Color(winrt::Color const& value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_ColorProperty, ValueHelper<winrt::Color>::BoxValueIfNecessary(value));
}

winrt::Color ColorPickerProperties::Color()
{
    return ValueHelper<winrt::Color>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_ColorProperty));
}

void ColorPickerProperties::ColorSpectrumComponents(winrt::ColorSpectrumComponents const& value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_ColorSpectrumComponentsProperty, ValueHelper<winrt::ColorSpectrumComponents>::BoxValueIfNecessary(value));
}

winrt::ColorSpectrumComponents ColorPickerProperties::ColorSpectrumComponents()
{
    return ValueHelper<winrt::ColorSpectrumComponents>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_ColorSpectrumComponentsProperty));
}

void ColorPickerProperties::ColorSpectrumShape(winrt::ColorSpectrumShape const& value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_ColorSpectrumShapeProperty, ValueHelper<winrt::ColorSpectrumShape>::BoxValueIfNecessary(value));
}

winrt::ColorSpectrumShape ColorPickerProperties::ColorSpectrumShape()
{
    return ValueHelper<winrt::ColorSpectrumShape>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_ColorSpectrumShapeProperty));
}

void ColorPickerProperties::IsAlphaEnabled(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsAlphaEnabledProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsAlphaEnabled()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsAlphaEnabledProperty));
}

void ColorPickerProperties::IsAlphaSliderVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsAlphaSliderVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsAlphaSliderVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsAlphaSliderVisibleProperty));
}

void ColorPickerProperties::IsAlphaTextInputVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsAlphaTextInputVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsAlphaTextInputVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsAlphaTextInputVisibleProperty));
}

void ColorPickerProperties::IsColorChannelTextInputVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsColorChannelTextInputVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsColorChannelTextInputVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsColorChannelTextInputVisibleProperty));
}

void ColorPickerProperties::IsColorPreviewVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsColorPreviewVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsColorPreviewVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsColorPreviewVisibleProperty));
}

void ColorPickerProperties::IsColorSliderVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsColorSliderVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsColorSliderVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsColorSliderVisibleProperty));
}

void ColorPickerProperties::IsColorSpectrumVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsColorSpectrumVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsColorSpectrumVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsColorSpectrumVisibleProperty));
}

void ColorPickerProperties::IsHexInputVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsHexInputVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsHexInputVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsHexInputVisibleProperty));
}

void ColorPickerProperties::IsMoreButtonVisible(bool value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_IsMoreButtonVisibleProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
}

bool ColorPickerProperties::IsMoreButtonVisible()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_IsMoreButtonVisibleProperty));
}

void ColorPickerProperties::MaxHue(int value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_MaxHueProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int ColorPickerProperties::MaxHue()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_MaxHueProperty));
}

void ColorPickerProperties::MaxSaturation(int value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_MaxSaturationProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int ColorPickerProperties::MaxSaturation()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_MaxSaturationProperty));
}

void ColorPickerProperties::MaxValue(int value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_MaxValueProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int ColorPickerProperties::MaxValue()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_MaxValueProperty));
}

void ColorPickerProperties::MinHue(int value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_MinHueProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int ColorPickerProperties::MinHue()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_MinHueProperty));
}

void ColorPickerProperties::MinSaturation(int value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_MinSaturationProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int ColorPickerProperties::MinSaturation()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_MinSaturationProperty));
}

void ColorPickerProperties::MinValue(int value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_MinValueProperty, ValueHelper<int>::BoxValueIfNecessary(value));
}

int ColorPickerProperties::MinValue()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_MinValueProperty));
}

void ColorPickerProperties::PreviousColor(winrt::IReference<winrt::Color> const& value)
{
    static_cast<ColorPicker*>(this)->SetValue(s_PreviousColorProperty, ValueHelper<winrt::IReference<winrt::Color>>::BoxValueIfNecessary(value));
}

winrt::IReference<winrt::Color> ColorPickerProperties::PreviousColor()
{
    return ValueHelper<winrt::IReference<winrt::Color>>::CastOrUnbox(static_cast<ColorPicker*>(this)->GetValue(s_PreviousColorProperty));
}

winrt::event_token ColorPickerProperties::ColorChanged(winrt::TypedEventHandler<winrt::ColorPicker, winrt::ColorChangedEventArgs> const& value)
{
    return m_colorChangedEventSource.add(value);
}

void ColorPickerProperties::ColorChanged(winrt::event_token const& token)
{
    m_colorChangedEventSource.remove(token);
}
