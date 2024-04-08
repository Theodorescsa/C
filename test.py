list_sinhvien = []
with open('danhsachsinhvien.txt', 'r') as files:
        lines = files.readlines()
        for line in lines:
            if ":" in line:
                ky_tu_sau_dau_phay = line.split(":")[1].strip()
                list_sinhvien.append(ky_tu_sau_dau_phay)
for i in range(5):
    