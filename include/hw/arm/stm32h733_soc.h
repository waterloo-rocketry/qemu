#ifndef HW_ARM_STM32H733_SOC_H
#define HW_ARM_STM32H733_SOC_H

#include "hw/arm/armv7m.h"
#include "hw/or-irq.h"
#include "qom/object.h"

#define TYPE_STM32H733_SOC "stm32h733-soc"
OBJECT_DECLARE_SIMPLE_TYPE(STM32H733State, STM32H733_SOC)

struct STM32H733State {
	SysBusDevice parent_obj;
	ARMv7MState armv7m;
};

#endif
