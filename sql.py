import mysql.connector
list_sinhvien = []
i = 0
item = 0

conn = mysql.connector.connect(
    host="localhost",
    user="root",
    password="dinhthai2004",
    database="qlsv"
)

if conn.is_connected():
    print("Kết nối thành công đến MySQL!")

    # Tạo bảng
    cursor = conn.cursor()
    cursor.execute("CREATE TABLE IF NOT EXISTS sinhvien (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(50), mssv VARCHAR(50)),diemtoan VARCHAR(50),diemvan VARCHAR(50),dienanhvan VARCHAR(50)")

    # Chèn dữ liệu vào bảng
    with open('danhsachsinhvien.txt', 'r') as files:
        lines = files.readlines()
        for line in lines:
            if ":" in line:
                ky_tu_sau_dau_phay = line.split(":")[1].strip()
                list_sinhvien.append(ky_tu_sau_dau_phay)
    for i in range(len(list_sinhvien)/5):
        cursor.execute("INSERT INTO sinhvien (name, mssv, diemtoan, dienvan, diemanhvan) VALUES (%s, %s, %s, %s, %s)", (list_sinhvien[0], list_sinhvien[1],list_sinhvien[2],list_sinhvien[3],list_sinhvien[4]))
        del list_sinhvien[0]
        del list_sinhvien[1]
        del list_sinhvien[2]
        del list_sinhvien[3]
        del list_sinhvien[4]
        
        # Commit thay đổi vào database
    conn.commit()

    print("Dữ liệu đã được chèn vào bảng!")

        # Đóng kết nối
    cursor.close()
    conn.close()
else:
    print("Không thể kết nối đến MySQL!")
