def la_so_hoan_hao(n):
    tong_uoc = 0
    for i in range(1, n):
        if n % i == 0:
            tong_uoc += i
    return tong_uoc == n

def tim_cac_so_hoan_hao(den_n):
    ket_qua = []
    for i in range(2, den_n + 1):
        if la_so_hoan_hao(i):
            ket_qua.append(i)
    return ket_qua

# Nhập từ người dùng
try:
    n = int(input("Nhập số nguyên dương N: "))
    if n < 1:
        print("Vui lòng nhập số lớn hơn 0.")
    else:
        cac_so_hoan_hao = tim_cac_so_hoan_hao(n)
        print(f"Các số hoàn hảo nhỏ hơn hoặc bằng {n} là: {cac_so_hoan_hao}")
except ValueError:
    print("Vui lòng nhập một số nguyên hợp lệ.")
