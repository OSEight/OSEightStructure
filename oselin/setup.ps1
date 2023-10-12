#Requires -RunAsAdministrator
$currentPrincipal = New-Object Security.Principal.WindowsPrincipal([Security.Principal.WindowsIdentity]::GetCurrent())
$currentPrincipal.IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)
@echo off
echo YOUR COMPUTER WILL RESTART INTO BIOS; YOU SHOULD MAKE A BOOTABLE USB FOR OSEIGHT AND
echo PLUG IT IN, THAN SET BOOT ORDER TO USB FIRST. PRESS ANY KEY TO CONTINUE.
Write-Host -NoNewLine 'Press any key to continue...';
$null = $Host.UI.RawUI.ReadKey('NoEcho,IncludeKeyDown');
shutdown /r /fw