from collections import defaultdict

totals = defaultdict(int)

with open("Timing.txt") as f:
    for line in f:
        parts = line.strip().split(" took: ")
        if len(parts) == 2 and parts[1].endswith("us"):
            label = parts[0]
            val = int(parts[1][:-2])  # remove "us" and convert to int
            totals[label] += val

for k, v in totals.items():
    print(f"{k} total: {v}us")