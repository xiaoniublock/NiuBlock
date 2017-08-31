set(EXECUTABLE_OUTPUT_PATH ${OUTDIR}/base/big_int/test)

include_directories(
    ${TOPDIR}/base/base/include
    ${TOPDIR}/base/big_int/include
)

link_directories(
    ${TOPDIR}/3rdparty/prebuild/libbitcoin/lib/
    ${TOPDIR}/3rdparty/prebuild/univalue/lib/
)


#################################
add_executable(test test.cpp)
target_link_libraries(test big_int)