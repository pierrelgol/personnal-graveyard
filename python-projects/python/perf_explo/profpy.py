import sys
import time
import subprocess

# Check if a command-line argument is provided
if len(sys.argv) < 3:
    print("Please provide the Python interpreter and the script to profile.")
    sys.exit(1)

# Get the Python interpreter and script file
python_interpreter = sys.argv[1]
script_file = sys.argv[2]

# Get start time
start_time = time.time()

# Run the command using subprocess
process = subprocess.Popen([python_interpreter, script_file])
process.wait()

# Get end time
end_time = time.time()

# Calculate elapsed time in seconds
elapsed_time = end_time - start_time

# Print profiling information
print("Elapsed time: {:.6f} seconds".format(elapsed_time))
print("Number of clock cycles: {:.0f}".format(elapsed_time * 3.0e9))  # Assuming 3.0 GHz CPU frequency

