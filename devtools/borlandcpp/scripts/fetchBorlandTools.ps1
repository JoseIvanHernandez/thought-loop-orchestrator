# Pulls core Borland tools from OneDrive and places them in your local project directory

# Dynamically reference current username path
$basePath = "C:\Users\$env:USERNAME\OneDrive\DevTools"
$sourcePath = Join-Path $basePath "BorlandISOContents"
$targetPath = Join-Path $basePath "borlandcpp"

# List of required Borland executables
$files = @("bcc.exe", "tlink.exe", "ide.exe", "winspect.exe", "dfa.exe")

foreach ($file in $files) {
    $match = Get-ChildItem -Path $sourcePath -Recurse -Filter $file -ErrorAction SilentlyContinue | Select-Object -First 1
    if ($match) {
        Copy-Item $match.FullName -Destination $targetPath -Force
        Write-Host "✅ Copied $file to borlandcpp folder"
    } else {
        Write-Host "❌ Could not find $file"
    }
}
