set(EXECUTABLE_OUTPUT_PATH ${OUTDIR}/base/base/test)

include_directories(
    ${TOPDIR}/base/base/src
)

link_directories(
)


#################################
add_executable(TestUtilTime TestUtilTime.cpp)
target_link_libraries(TestUtilTime base boost_thread boost_system)


#################################
add_executable(TestUtilStrEncodings TestUtilStrEncodings.cpp)
target_link_libraries(TestUtilStrEncodings base boost_thread boost_system)