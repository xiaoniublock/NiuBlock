include_directories(
	${TOPDIR}/base/big_int/include/big_int
)

file(GLOB_RECURSE HEADERFILES "../include/*")
aux_source_directory(. DIR_SRCS)
add_library(big_int ${DIR_SRCS} ${HEADERFILES})