#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stack>
#include <map>
#include <unordered_map>
#include <span>
#include <memory>
#include <functional>
#include <concepts>
#include <format>
#include <chrono>
#include <numeric>
#include <numbers>

//GLM
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

//stb_image.h
#include <stb_image.h>

//Vulkan
#ifdef _WIN32
#define VK_USE_PLATFORM_WIN32_KHR
#pragma comment(lib, "vulkan-1.lib")
#endif

#include <vulkan/vulkan.h>