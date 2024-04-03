#include "qemu/osdep.h"

#include "hw/arm/boot.h"
#include "hw/arm/stm32h733_soc.h"
#include "hw/boards.h"
#include "hw/qdev-clock.h"
#include "hw/qdev-properties.h"
#include "qapi/error.h"
#include "qemu/error-report.h"
#include "qemu/typedefs.h"

static void processor_board_init(MachineState *machine) {}

static void processor_board_machine_init(MachineClass *mc) {
	static const char *const valid_cpu_types[]
		= {ARM_CPU_TYPE_NAME("cortex-m7"), NULL};

	mc->desc = "Waterloo Rocketry Processor Board (STM32H733,Cortex-M7)";
	mc->init = processor_board_init;
	mc->valid_cpu_types = valid_cpu_types;
}

DEFINE_MACHINE("processor-board", processor_board_machine_init)
