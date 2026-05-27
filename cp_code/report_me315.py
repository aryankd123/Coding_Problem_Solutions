import matplotlib.pyplot as plt
import numpy as np

# Data from the table
standard_readings = [1.35, 1.37, 1.40, 1.43, 1.45, 1.48, 1.5, 2.5, 3.5, 4.5, 5.5, 7.0, 8.0, 9.0, 10.0]
measured_readings = [1.39, 1.42, 1.45, 1.48, 1.50, 1.53, 1.54, 2.55, 3.55, 4.55, 5.55, 7.10, 8.08, 9.08, 10.12]
errors = [0.04, 0.05, 0.05, 0.05, 0.05, 0.05, 0.04, 0.05, 0.05, 0.05, 0.05, 0.10, 0.08, 0.08, 0.12]

# --- Create the Calibration Graph ---
plt.style.use('seaborn-v0_8-whitegrid') # Using a style similar to the reference
fig1, ax1 = plt.subplots(figsize=(12, 7))

x = np.arange(len(standard_readings))  # the label locations
width = 0.35  # the width of the bars

rects1 = ax1.bar(x - width/2, standard_readings, width, label='Standard values (mm)', color='gray')
rects2 = ax1.bar(x + width/2, measured_readings, width, label='Measured Calibrated Values (mm)', color='steelblue')

# Add some text for labels, title and axes ticks
ax1.set_ylabel('Values in mm')
ax1.set_title('(a) Calibration Graph')
ax1.set_xticks(x)
ax1.set_xticklabels([f'{val}' for val in standard_readings], rotation=45, ha="right")
ax1.legend()

# Add data labels on top of the measured bars
ax1.bar_label(rects2, padding=3, fmt='%.2f')

fig1.tight_layout()
plt.savefig('calibration_graph.png')
print("Saved calibration_graph.png")

# --- Create the Error Graph ---
fig2, ax2 = plt.subplots(figsize=(10, 6))

ax2.plot(standard_readings, errors, marker='o', linestyle='-', color='darkblue')

# Set labels and title
ax2.set_xlabel('Standard Readings (mm)')
ax2.set_ylabel('Error (mm)')
ax2.set_title('(b) Error Graph')
ax2.grid(True) # Add grid lines

# Ensure y-axis starts from 0
ax2.set_ylim(bottom=0)

fig2.tight_layout()
plt.savefig('error_graph.png')
print("Saved error_graph.png")