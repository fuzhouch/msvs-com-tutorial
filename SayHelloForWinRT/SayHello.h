#pragma once

#include "SayHello.g.h"

namespace winrt::SayHelloForWinRT::implementation
{
    struct SayHello : SayHelloT<SayHello>
    {
        SayHello() = default;
        BSTR Greetings() const; 
    };
}

namespace winrt::SayHelloForWinRT::factory_implementation
{
    struct SayHello : SayHelloT<SayHello, implementation::SayHello>
    {
    };
}
