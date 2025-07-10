# dataset_links.ps1
# 📌 Data Pointer & Downloader Script for DSA Hackathon

# Set your dataset download destination
$destination = "$PSScriptRoot/../raw"
if (!(Test-Path $destination)) {
    New-Item -ItemType Directory -Path $destination | Out-Null
}

# DSA Dataset Bundle - You must unlock it with password 'dsa25' manually for now
$zipUrl = "https://drive.google.com/file/d/1h0jlMM6Ggva6vL0fpF1Fmyo2T-_UEkpl/view?usp=sharing"  # 🔁 Replace with real link
$zipFile = "$destination/dsa-datasets.zip"

# Download if not already present
if (!(Test-Path $zipFile)) {
    Write-Host "📥 Downloading dataset bundle from DSA..."
    Invoke-WebRequest -Uri $zipUrl -OutFile $zipFile
} else {
    Write-Host "✅ Dataset ZIP already exists."
}

# Extract contents
Write-Host "📂 Extracting datasets..."
Expand-Archive -Path $zipFile -DestinationPath $destination -Force

# Done!
Write-Host "✅ All datasets ready in: $destination"
