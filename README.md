# Datalog Benchmarks & Rule Generation Code

#### Benchmark Structure
## ALPS files
<b>*.d</b> -- ALPS-friendly data. Contains input and output tuples. There should be one .d file per benchmark.
<br>
<b>*.tp</b> -- ALPS-friendly template file. Contains meta-rules required for ALPS's rule generation. There should be one .tp file per benchmark.
<br>

## ProSynth files
<b>*.facts</b> -- ProSynth-friendly input data. Contains expected tuples for a specific input. There should be one .facts file per input relation. 
<br>
<b>*.expected</b> -- ProSynth-friendly output data. Contains expected tuples for a specific output. There should be one .expected file per output relation. 
<br>
