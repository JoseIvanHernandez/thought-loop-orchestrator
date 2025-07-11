
$folders = @(
    ".\Action\Serve",
    ".\Action\Sustain",
    ".\Action\Deploy",
    ".\Decision\LogicEngine",
    ".\Discovery\DataPrep"
)

foreach ($folder in $folders) {
    if (-not (Test-Path $folder)) {
        New-Item -ItemType Directory -Path $folder | Out-Null
        Write-Host "✅ Created: $folder"
    } else {
        Write-Host "🔁 Already exists: $folder (good memory!)"
    }

    $tagFile = Join-Path $folder "loop.mind"
    if (-not (Test-Path $tagFile)) {
        "Loop Stage: $folder" | Set-Content $tagFile
        Write-Host "🧠 Thought tag added to $folder"
    }
}
