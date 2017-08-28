set(EXECUTABLE_OUTPUT_PATH ${OUTDIR}/example/test)

include_directories(
	${TOPDIR}/3rdparty/prebuild/libbitcoin/include/
)

link_directories(
    ${TOPDIR}/3rdparty/prebuild/libbitcoin/lib/
)


#################################
add_executable(TestVersion TestVersion.cpp)
target_link_libraries(TestVersion bitcoin)