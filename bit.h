/* 
 * File:   bit.h
 * Author: santa
 *
 * Created on 14 de Junho de 2026, 21:30
 */

#ifndef BIT_H
#define	BIT_H

#ifdef	__cplusplus
extern "C" {
#endif

#define bitSet(arg,bit) ((arg) |= (1<<(bit)))
#define bitClr(arg,bit) ((arg) &= ~(1<<(bit)))
#define bitFlp(arg,bit) ((arg) ^= (1<<(bit))) 
#define bitTst(arg,bit) ((arg) & (1<<(bit)))

#ifdef	__cplusplus
}
#endif

#endif	/* BIT_H */

