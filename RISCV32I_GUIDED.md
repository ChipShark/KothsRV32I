Below is the full Markdown file content.
You can create a file named:

```
RISCV32I_DEV_GUIDANCE.md
```

and paste everything below into it.

---

# RISCV32I_DEV_GUIDANCE.md

# RV32I CPU Development Guidance

## Project Goal

Design and implement a **simple 5-stage pipelined RV32I CPU** in Verilog (.v), with SystemVerilog (.sv) used only for testbenches.

Target:

* Synthesizable RTL
* FPGA-friendly
* Tape-out friendly
* Step-by-step learning

---

# High-Level CPU Overview

You are building a:

> In-order, single-issue, 5-stage pipelined RV32I CPU.

## ISA: RV32I

Supports:

* Arithmetic: `add`, `sub`, `addi`, `and`, `or`, etc.
* Memory: `lw`, `sw`, `lb`, `sb`, etc.
* Branch: `beq`, `bne`
* Jump: `jal`, `jalr`
* Immediate: `lui`, `auipc`

No:

* Multiply/divide
* Floating point
* Privilege
* Caches (for now)

---

# Pipeline Stages

## 1. IF — Instruction Fetch

* Holds Program Counter (PC)
* Computes PC + 4
* Handles redirect (branch/jump)
* Fetches instruction from instruction memory

## 2. ID — Instruction Decode

* Extract rs1, rs2, rd
* Read register file
* Generate immediate
* Decode control signals

## 3. EX — Execute

* ALU operations
* Branch comparison
* Target address calculation

## 4. MEM — Memory Access

* Load/store handling
* Byte/halfword formatting

## 5. WB — Write Back

* Write result to register file

---

# Repository Structure (Week 1)

```
rv32i_cpu/
├── rtl/
│   ├── if_stage.v
│   └── imem.v
├── tb/
│   └── tb_if_stage.sv
└── sim/
    ├── Makefile
    └── sim_main.cpp (if older Verilator)
```

Keep it minimal for Week 1.

---

# Week 1: Instruction Fetch Stage

## Goal

Implement and verify:

* PC register
* PC + 4 logic
* Redirect logic
* Instruction memory interface

---

# IF Stage Mental Model

IF stage =

```
PC register
    +
PC+4 logic
    +
Redirect mux
    +
Instruction fetch
```

Nothing else.

---

# Instruction Memory (imem)

Purpose:

* Acts as instruction ROM
* Returns instruction based on PC
* Uses word addressing (`addr[31:2]`)

Important:

* Only used for simulation right now
* Later becomes BRAM (FPGA) or SRAM (ASIC)

---

# Testbench Structure

## Clock

* 10ns period
* Toggle every 5ns

## Reset

* Assert for 3 clock cycles
* Deassert cleanly on clock edge
* Never time-based (`#delay`) reset

## Memory Init

Initialize memory in TB:

* Use NOP (`32'h0000_0013`)
* Assign via hierarchical reference:
  `u_imem.mem[index] = value`

---

# Week 1 Test Plan

After reset release:

1. PC increments by 4:

   * 0 → 4 → 8 → 12

2. Redirect test:

   * Assert `redirect_valid`
   * PC jumps to `redirect_pc`

3. Post-redirect:

   * Next cycle → `redirect_pc + 4`

Use:

* `$fatal` for failures
* `$display("PASS")` at end

---

# Common Beginner Mistakes

❌ Multi-bit clock
❌ Not initializing clock
❌ Using `wait()` (unsupported in older Verilator)
❌ Using time-based reset
❌ Using semicolons instead of commas in module instantiation
❌ Typo in instance name (e.g., `u_mem` vs `u_imem`)

---

# Verilator Notes

If `--binary` is unsupported:

Use classic flow:

* `--cc`
* `--exe sim_main.cpp`
* `make -C obj_dir`

Older Verilator does not support:

* `wait()` statements

Replace:

```
wait(reset == 0);
```

With:

```
while (reset) @(posedge clk);
```

---

# Week 1 Completion Criteria

You are done with Week 1 when:

* PC resets to 0
* PC increments correctly
* Redirect works
* Waveform confirms behavior
* Testbench prints PASS

---

# Next Steps (Week 2 Preview)

* Implement register file
* Implement immediate generator
* Implement basic control decode
* Build ID stage
* Keep test-driven approach

---

# Development Philosophy

Build incrementally.

1. One module
2. One test
3. Make it pass
4. Move forward

Do not:

* Build entire CPU at once
* Add features before verifying previous stage
* Over-optimize early

---

# Core Learning Principle

If you deeply understand:

* Why PC updates on clock edge
* Why PC+4 is default
* Why redirect overrides PC+4
* Why memory is external

You understand the foundation of CPU design.

---

# Status

Current stage: **Week 1 — IF Stage**

Next milestone: Clean IF waveform + PASS message.

---

End of file.
