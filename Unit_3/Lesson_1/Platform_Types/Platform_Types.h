 /******************************************************************************
 *
 * Module: Common - Platform Abstraction
 *
 * File Name: Platform_Types.h
 *
 * Description: Platform types for ARM
 *
 * Author: Youssef Khaled
 *
 *******************************************************************************/

#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

/*
 * Boolean Values
 */
#ifndef FALSE
#define FALSE       (0u)
#endif
#ifndef TRUE
#define TRUE        (1u)
#endif

typedef unsigned char         boolean;

typedef unsigned char         uint8;          /*           0 .. 255             */
typedef signed char           sint8;          /*        -128 .. +127            */
typedef unsigned short        uint16;         /*           0 .. 65535           */
typedef signed short          sint16;         /*      -32768 .. +32767          */
typedef unsigned long         uint32;         /*           0 .. 4294967295      */
typedef signed long           sint32;         /* -2147483648 .. +2147483647     */
typedef unsigned long long    uint64;         /*       0..18446744073709551615  */
typedef signed long long      sint64;         /* -9223372036854775808 .. 9223372036854775807 */


typedef float                 float32;
typedef double                float64;


typedef volatile char                       vchar_t;
typedef volatile signed char                vsint8_t;
typedef volatile unsigned char              vuint8_t;
typedef volatile signed short               vsint16_t;
typedef volatile unsigned short             vuint16_t;
typedef volatile signed int                 vsint32_t;
typedef volatile unsigned int               vuint32_t;
typedef volatile signed long long int       vsint64_t;
typedef volatile unsigned long long int     vuint64_t;

#endif /* PLATFORM_TYPES_H */
