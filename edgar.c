#include <stdio.h>

int main(){
	
	int jlh_krywn,pil_jabatan, pil_nikah,total_gaji, jam_lembur, final_jam_lembur,total_gaji_sementara;
	char nama_krywn[50];
	int i;
	int urut = 1;
	
	printf("Masukkan jumlah karyawan: ");
	scanf("%d",&jlh_krywn);	
	printf("\nJumlah Karyawan : %d\n",jlh_krywn);
	
	for(i=0;i<jlh_krywn;i++){
		printf("\n\nMasukkan Nama Karyawan %d: ",urut);
		scanf("%s",&nama_krywn);
		printf("\nNama Karyawan %d adalah: %s",urut,nama_krywn);
		//Role Karyawan
		printf("\n\nPilih Jabatan Karyawan %s: ",nama_krywn);
		printf("\n1. Manager\n");
		printf("2. Superviosor\n");
		printf("3. Karyawan Biasa\n");
		printf("4. Cleaning Service\n");
		printf("Masukkan Pilihan Jabatan %s: ",nama_krywn);
		scanf("%d",&pil_jabatan);
		//gaji cetak
		if(pil_jabatan==1){
			printf("\nJabatan dari %s adalah Manager\n",nama_krywn);
			printf("Jumlah Gaji %s perbulan adalah Rp. 15.000.000\n",nama_krywn);
		}else if(pil_jabatan==2){
			printf("\nJabatan dari %s adalah Superviosor\n",nama_krywn);
			printf("Jumlah Gaji %s perbulan adalah Rp. 10.000.000\n",nama_krywn);
		}else if(pil_jabatan==3){
			printf("\nJabatan dari %s adalah Karyawan Biasa\n",nama_krywn);
			printf("Jumlah Gaji %s perbulan adalah Rp. 7.000.000\n",nama_krywn);
		}else if(pil_jabatan==4){
			printf("\nJabatan dari %s adalah Cleaning Service\n",nama_krywn);
			printf("Jumlah Gaji %s perbulan adalah Rp. 3.000.000\n",nama_krywn);
		}
		
		//Status pernikahan Tunjangan
		printf("\n\nPilih Status Pernikahan Karyawan %s: ",nama_krywn);
		printf("\n1. Menikah belum punya anak 1 orang\n");
		printf("2. Menikah belum punya anak 2 orang\n");
		printf("3. Menikah belum punya anak lebih dari 2 orang\n");
		printf("4. J O M B L O\n");
		printf("Masukkan Pilihan Status Pernikahan %s: ",nama_krywn);
		scanf("%d",&pil_nikah);
		if(pil_jabatan==1){
			printf("\nStatus Pernikahan dari %s adalah : Menikah belum punya anak 1 orang\n",nama_krywn);
			printf("Jumlah Tunjangan %s adalah Rp. 2.000.000\n",nama_krywn);
		}else if(pil_jabatan==2){
			printf("\nStatus Pernikahan dari %s adalah : Menikah belum punya anak 2 orang\n",nama_krywn);
			printf("Jumlah Tunjangan %s adalah Rp. 3.000.000\n",nama_krywn);
		}else if(pil_jabatan==3){
			printf("\nStatus Pernikahan dari %s adalah : Menikah belum punya anak lebih dari 2 orang\n",nama_krywn);
			printf("Jumlah Tunjangan %s adalah Rp. 4.000.000\n",nama_krywn);
		}else if(pil_jabatan==4){
			printf("\nStatus Pernikahan dari %s adalah : J O M B L O !\n",nama_krywn);
			printf("Jumlah Tunjangan %s adalah : Rp. 0\n",nama_krywn);
		}
		printf("\n");
		printf("Masukkan Jam Lembur (jam\bulan) : ");
		scanf("%d",&jam_lembur);
		final_jam_lembur = jam_lembur*100000;
		printf("\nMaka Gaji Jam Lembur perBulan adalah Rp. %d\n",final_jam_lembur);
		printf("\nPPh :");
		printf("Jumlah diterima >= 20.000.000 -> pph = 15%\n");
		printf("Jumlah diterima antara 10.000.000 s/d 20.000.000 -> pph = 10%\n");
		printf("Jumlah diterima  <= 10.000.000 -> pph = 10%\n");
		
		printf("\nMaka PPh dari %s adalah : ",nama_krywn);
	
		
		if(pil_jabatan==1){
			if(pil_nikah==1){
				if(final_jam_lembur>=3000000){
					printf("15%\n");
				}else if(final_jam_lembur<3000000)	{
					printf("10%\n");	
				}
			}else if (pil_nikah==2){
				if(final_jam_lembur>=2000000){
					printf("15%\n");
				}else if(final_jam_lembur<2000000)	{
					printf("10%\n");	
				}
			}else if(pil_nikah==3){
				if(final_jam_lembur>=1000000){
					printf("15%\n");
				}else if(final_jam_lembur<1000000)	{
					printf("10%\n");	
				}
			}
		}else if(pil_jabatan==2){
			
		}
		
		urut++;
	}
	
	
	
	return 0;
}