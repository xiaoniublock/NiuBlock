project(niublock)

cmake_minimum_required(VERSION 2.8.2)


set(TOPDIR ${CMAKE_CURRENT_SOURCE_DIR})


set(OUTDIR ${TOPDIR}/cmake-build/out/)
set(BUILDDIR ${TOPDIR}/cmake-build/build)


#SET(CMAKE_BUILD_TYPE "Debug")
#SET(CMAKE_CXX_FLAGS_DEBUG "-g -Wall")

add_compile_options(-Wall -Wno-unused-local-typedefs -O2 -Os -fomit-frame-pointer)
add_compile_options("--std=c++11")

#add_definitions(-DHAVE_BYTESWAP_H)
#add_definitions(-DHAVE_ENDIAN_H)
add_definitions(-DHAVE_WORKING_BOOST_SLEEP)

add_subdirectory(${TOPDIR}/base/base/src ${BUILDDIR}/base/base/src)
add_subdirectory(${TOPDIR}/base/base/test ${BUILDDIR}/base/base/test)

add_subdirectory(${TOPDIR}/base/big_int/src ${BUILDDIR}/base/big_int/src)
add_subdirectory(${TOPDIR}/base/big_int/test ${BUILDDIR}/base/big_int/test)

add_subdirectory(${TOPDIR}/base/compat/src ${BUILDDIR}/base/compat/src)

add_subdirectory(${TOPDIR}/base/crypto/src ${BUILDDIR}/base/crypto/src)

add_subdirectory(${TOPDIR}/example/src ${BUILDDIR}/example/src)
add_subdirectory(${TOPDIR}/example/test ${BUILDDIR}/example/test)
