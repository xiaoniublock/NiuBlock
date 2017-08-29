#ifndef COMMON_H
#define COMMON_H

#include <byteswap.h>

/*
inline uint32_t le32toh(uint32_t little_endian_32bits)
{
  return bswap_32(little_endian_32bits);
}

inline uint32_t bswap_32(uint32_t x)
{
  return (((x & 0xff000000U) >> 24) | ((x & 0x00ff0000U) >>  8) |
	  ((x & 0x0000ff00U) <<  8) | ((x & 0x000000ffU) << 24));
}
*/

uint32_t static inline ReadLE32(const unsigned char* ptr)
{
  uint32_t x;
  memcpy((char*)&x, ptr, 4);
  //return le32toh(x);
  return bswap_32(x);
}

void static inline WriteLE32(unsigned char* ptr, uint32_t x)
{
  uint32_t v = htole32(x);
  memcpy(ptr, (char*)&v, 4);
}



/*
 uint64_t bswap_64(uint64_t x)
{
  return (((x & 0xff00000000000000ull) >> 56)
	  | ((x & 0x00ff000000000000ull) >> 40)
	  | ((x & 0x0000ff0000000000ull) >> 24)
	  | ((x & 0x000000ff00000000ull) >> 8)
	  | ((x & 0x00000000ff000000ull) << 8)
	  | ((x & 0x0000000000ff0000ull) << 24)
	  | ((x & 0x000000000000ff00ull) << 40)
	  | ((x & 0x00000000000000ffull) << 56));
}

uint64_t le64toh(uint64_t little_endian_64bits)
{
  return bswap_64(little_endian_64bits);
}
*/
uint64_t  inline  ReadLE64(const unsigned char* ptr)
{
  uint64_t x;
  memcpy((char*)&x, ptr, 8);
  //return le64toh(x);
  return bswap_64(x);
}


#endif 
