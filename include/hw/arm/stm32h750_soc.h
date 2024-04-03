#ifndef HW_ARM_STM32H750_SOC_H
#define HW_ARM_STM32H750_SOC_H

#include "hw/arm/armv7m.h"
#include "hw/or-irq.h"
#include "qom/object.h"

#define TYPE_STM32H750_SOC "stm32h750-soc"
OBJECT_DECLARE_SIMPLE_TYPE(STM32H750State, STM32H750_SOC)

struct STM32H750State {
	SysBusDevice parent_obj;
	ARMv7MState armv7m;
};

#endif
