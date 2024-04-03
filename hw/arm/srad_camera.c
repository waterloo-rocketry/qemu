#include "qemu/osdep.h"

#include "hw/arm/boot.h"
#include "hw/arm/stm32h750_soc.h"
#include "hw/boards.h"
#include "hw/qdev-clock.h"
#include "hw/qdev-properties.h"
#include "qapi/error.h"
#include "qemu/error-report.h"
#include "qemu/typedefs.h"

static void srad_camera_init(MachineState *machine) {}

static void srad_camera_machine_init(MachineClass *mc) {
	static const char *const valid_cpu_types[]
		= {ARM_CPU_TYPE_NAME("cortex-m7"), NULL};

	mc->desc = "Waterloo Rocketry SRAD Camera (Cortex-M7)";
	mc->init = srad_camera_init;
	mc->valid_cpu_types = valid_cpu_types;
}

DEFINE_MACHINE("srad-camera", srad_camera_machine_init)
