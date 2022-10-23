#ifndef _COMMON_MACROS__
#define _COMMON_MACROS__

#define DRV_SET_BIT(value,bit_pos)      ( (value) |= (1 << (bit_pos)) )
#define DRV_CLEAR_BIT(value,bit_pos)    ( (value) &= ~(1 << (bit_pos))  )
#define DRV_CHECK_BIT(value,bit_pos)    ( (value) & (1 << (bit_pos)))




#endif /* _COMMON_MACROS__ */