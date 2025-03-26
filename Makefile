build:
	gcc vuln.c -fno-stack-protector -o vuln -no-pie
clean: 
	rm vuln
