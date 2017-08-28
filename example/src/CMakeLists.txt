include_directories(
	${TOPDIR}/3rdparty/prebuild/libbitcoin/include
)

file(GLOB_RECURSE HEADERFILES "../include/*")
aux_source_directory(. DIR_SRCS)
add_library(example ${DIR_SRCS} ${HEADERFILES})