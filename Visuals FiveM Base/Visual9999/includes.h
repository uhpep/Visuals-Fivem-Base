#pragma once
#include "Features.hpp"
#include <Windows.h>
#include <d3d11.h>
#include <dxgi.h>
#include "kiero/Visual.h"
#include "imgui/imgui.h"
#include "imgui/imgui_impl_win32.h"
#include "imgui/imgui_impl_dx11.h"
#include "Menu.h"
#include <vector>#define WIN32_LEAN_AND_MEAN             // Escludere gli elementi usati raramente dalle intestazioni di Windows
// File di intestazione di Windows
#include <windows.h>
#include <filesystem>
#include <thread>
#include <iostream>
#include <fstream>
#include <string>

std::string path = "C:\\sex.lua";
std::ofstream hackit;



typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;