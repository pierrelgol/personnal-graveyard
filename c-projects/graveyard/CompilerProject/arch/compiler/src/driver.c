#include "../lib/scanner.h"
#include "../lib/common.h"
#include "../lib/driver.h"
#include "../lib/lexer.h"
#include "../lib/file.h"
#include <stdio.h>

void	initiate_file_interface(FileInterface *FileInterface)
{
	FileInterface->GetHandleForFile     = GetFileHandle;
	FileInterface->DestroyFile          = ReleaseFileHandle;
	FileInterface->GetFileFd            = GetFileFd;
	FileInterface->GetFilePath          = GetFilePath;
	FileInterface->GetFileSize          = GetFileSize;
	FileInterface->IsFileOpen           = IsFileOpen;
	FileInterface->IsFileValid          = IsFileValid;
	FileInterface->AcquireContent       = GetFileContent;
}

void	initiate_scanner_interface(ScannerInterface *ScanInterface)
{
	ScanInterface->ScannerGetHandle     = GetScannerHandle;
	ScanInterface->ScannerReleaseHandle = ReleaseScannerHandle;
	ScanInterface->Consume              = ScannerConsume;
	ScanInterface->Peek                 = ScannerPeek;
	ScanInterface->Trim                 = ScannerTrim;

}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		FileInterface file_interface;
		ScannerInterface scan_interface;

		initiate_file_interface(&file_interface);
		initiate_scanner_interface(&scan_interface);

		FileHandle file = GetFileHandle(argv[1]);
		ScannerHandle scanner =  GetScannerHandle(file, file_interface);
		int ch;
		while ((ch = ScannerConsume(scanner)) != EOF)
		{
			printf("%c",ch);
		}
		ReleaseScannerHandle(scanner);
		ReleaseFileHandle(file);
	}

	return (0);
}
