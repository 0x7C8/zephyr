# Copyright (c) 2025 LTH
# SPDX-License-Identifier: Apache-2.0


zephyr_sources(
    ${ZEPHYR_BASE}/soc/common/riscv-privileged/soc_irq.S
    ${ZEPHYR_BASE}/soc/common/riscv-privileged/vector.S
)

zephyr_include_directories(.)
zephyr_library_sources(soc.c)

set(SOC_LINKER_SCRIPT ${ZEPHYR_BASE}/include/zephyr/arch/riscv/common/linker.ld CACHE INTERNAL "")