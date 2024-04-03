#include "qemu/osdep.h"

#include "exec/address-spaces.h"
#include "hw/arm/stm32h733_soc.h"
#include "hw/misc/unimp.h"
#include "hw/qdev-clock.h"
#include "qapi/error.h"
#include "sysemu/sysemu.h"

static void stm32h733_soc_initfn(Object *obj) {}

static void stm32h733_soc_realize(DeviceState *dev_soc, Error **errp) {}

static void stm32h733_soc_class_init(ObjectClass *klass, void *data) {
	DeviceClass *dc = DEVICE_CLASS(klass);
	dc->realize = stm32h733_soc_realize;
}

static const TypeInfo stm32h733_soc_info = {
	.name = TYPE_STM32H733_SOC,
	.parent = TYPE_SYS_BUS_DEVICE,
	.instance_size = sizeof(STM32H733State),
	.instance_init = stm32h733_soc_initfn,
	.class_init = stm32h733_soc_class_init,
};

static void stm32h733_soc_types(void) {
	type_register_static(&stm32h733_soc_info);
}

type_init(stm32h733_soc_types)
