## Install

**1. Verilator**
```bash
brew install verilator
```

**2. GTKWave**
```bash
brew install --HEAD randomplum/gtkwave/gtkwave
```
Note: GTKWave on macOS 14+ is fixed by building from this community tap instead of the official brew package (https://github.com/gtkwave/gtkwave/issues/250#issuecomment-1798440219)

## Run

**1. Copy part0 into the working dir and build**
```bash
mkdir -p ~/tmp/verilator_working_dir && cp -r ./* ~/tmp/verilator_working_dir/ && (cd ~/tmp/verilator_working_dir && verilator -Wall --trace --exe --build -cc SIM_FILE.cpp TARGET.v && ./obj_dir/VTARGET && cp TRACE.vcd "$OLDPWD/")
```
Note: Verilator fails if the path contains spaces, so we use `~/tmp/verilator_working_dir`
Note: The executable generated from `TARGET.v` always just adds V to the beginning to become `VTARGET` (e.g. `module.v` becomes `Vmodule`)
Note: You have to look inside `SIM_FILE.cpp` (e.g. `open("waveform.vcd")`) to figure out what `TRACE.vcd` will be called before you run it. You can also just remove `cp TRACE.vcd "$OLDPWD/"` from the end of the command and cd into the working directory to see the .vcd file generated.

**2. Open the waveform in GTKWave**
```bash
gtkwave TRACE.vcd
```
Note: To view the waveform, click TOP -> right‑click the signal -> Recurse Import -> Append -> Yes in the GTKWave instance that opens
Note: After opening the signals, you can click File -> Write Save File to save it without having to reopen every signal each time. You can then just use GTKWave like normal to open the save file (`gtkwave TRACE_WITH_SIGNALS.vcd`).