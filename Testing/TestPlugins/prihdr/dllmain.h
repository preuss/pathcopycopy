// dllmain.h
// (c) 2011-2020, Charles Lechasseur
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

class CTestPluginsModule final : public ATL::CAtlDllModuleT<CTestPluginsModule>
{
public :
	DECLARE_LIBID(LIBID_TestPluginsLib)
#pragma warning(suppress: ALL_CPPCORECHECK_WARNINGS)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TESTPLUGINS, "{49003867-BBB5-4A7B-B03E-61586847E2B9}")

    HRESULT DllRegisterServer(BOOL bRegTypeLib = TRUE) throw();
    HRESULT DllUnregisterServer(BOOL bUnRegTypeLib = TRUE) throw();

    static HINSTANCE HInstance() noexcept;
};

extern class CTestPluginsModule _AtlModule;
