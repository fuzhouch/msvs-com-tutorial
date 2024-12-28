#include "pch.h"
#include "SayHello.h"
#include "SayHello.g.cpp"

namespace winrt::SayHelloForWinRT::implementation
{
    BSTR SayHello::Greetings() const
    {
        return wil::make_bstr(L"hello, world").release();
    }
}
