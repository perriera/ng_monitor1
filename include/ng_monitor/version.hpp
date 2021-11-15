#ifndef _NG_MONITOR_VERSION_HPP
#define _NG_MONITOR_VERSION_HPP

/**
 * @file version.hpp
 * @author Matt Williams (matt@perriera.com)
 * @author Perry Anderson (perry@perriera.com)
 * @brief Adds version support for Cmake script
 * @date 2021-08-08
 */

#define NG_MONITOR_VER_MAJOR 0
#define NG_MONITOR_VER_MINOR 9
#define NG_MONITOR_VER_PATCH 0

#define NG_MONITOR_VERSION \
  (NG_MONITOR_VER_MAJOR * 10000 + NG_MONITOR_VER_MINOR * 100 + NG_MONITOR_VER_PATCH)

#endif// _NG_MONITOR_VERSION_HPP
