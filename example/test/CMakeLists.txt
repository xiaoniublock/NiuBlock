set(EXECUTABLE_OUTPUT_PATH ${OUTDIR}/example/test)

include_directories(
    ${TOPDIR}/3rdparty/prebuild/libbitcoin/include/
    ${TOPDIR}/3rdparty/prebuild/univalue/include/
)

link_directories(
    ${TOPDIR}/3rdparty/prebuild/libbitcoin/lib/
    ${TOPDIR}/3rdparty/prebuild/univalue/lib/
)


#################################
#add_executable(TestVersion TestVersion.cpp)
#target_link_libraries(TestVersion bitcoin)


#################################
add_executable(TestUniValue TestUniValue.cpp)
target_link_libraries(TestUniValue univalue)