import pandas as pd

# Load Excel file into DataFrame
df = pd.read_excel('C:\Users\HP\Desktop\SHE\C++\demo1.xlsx')

# Convert DataFrame to JSON string
json_data = df.to_json(orient='records')

# Save JSON data to a file
with open('output.json', 'w') as file:
    file.write(json_data)

