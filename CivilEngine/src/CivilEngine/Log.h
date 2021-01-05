#pragma once

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace Civil {

	class CIVIL_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define CE_CORE_TRACE(...)	::Civil::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define CE_CORE_INFO(...)	::Civil::Log::GetCoreLogger()->info(__VA_ARGS__)
#define CE_CORE_WARN(...)	::Civil::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define CE_CORE_ERROR(...)	::Civil::Log::GetCoreLogger()->error(__VA_ARGS__)
#define CE_CORE_FATAL(...)	::Civil::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define CE_TRACE(...)		::Civil::Log::GetClientLogger()->trace(__VA_ARGS__)
#define CE_INFO(...)		::Civil::Log::GetClientLogger()->info(__VA_ARGS__)
#define CE_WARN(...)		::Civil::Log::GetClientLogger()->warn(__VA_ARGS__)
#define CE_ERROR(...)		::Civil::Log::GetClientLogger()->error(__VA_ARGS__)
#define CE_FATAL(...)		::Civil::Log::GetClientLogger()->critical(__VA_ARGS__)