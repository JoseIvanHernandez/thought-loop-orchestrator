Add-Type -AssemblyName System.Windows.Forms

# Create form
$form = New-Object System.Windows.Forms.Form
$form.Text = "🛠 Borland Tool Launcher"
$form.Size = New-Object System.Drawing.Size(300, 250)
$form.StartPosition = "CenterScreen"

# Status label
$statusLabel = New-Object System.Windows.Forms.Label
$statusLabel.Size = New-Object System.Drawing.Size(260, 20)
$statusLabel.Location = New-Object System.Drawing.Point(10, 10)
$statusLabel.Text = "Select a tool to launch:"
$form.Controls.Add($statusLabel)

# Function to launch executables
function Launch-Tool {
    param($toolName)
    $exePath = Join-Path $PSScriptRoot "$toolName.exe"
    if (Test-Path $exePath) {
        Start-Process $exePath
        $statusLabel.Text = "Launched $toolName!"
    } else {
        $statusLabel.Text = "❌ $toolName.exe not found."
    }
}

# Create buttons
$tools = @("dfa", "tlink", "winspect")
$yPos = 40
foreach ($tool in $tools) {
    $button = New-Object System.Windows.Forms.Button
    $button.Text = "Launch $tool.exe"
    $button.Size = New-Object System.Drawing.Size(260, 30)
    $button.Location = New-Object System.Drawing.Point(10, $yPos)
    $button.Add_Click({ Launch-Tool $tool })
    $form.Controls.Add($button)
    $yPos += 40
}

# Exit button
$exitBtn = New-Object System.Windows.Forms.Button
$exitBtn.Text = "Exit"
$exitBtn.Size = New-Object System.Drawing.Size(260, 30)
$exitBtn.Location = New-Object System.Drawing.Point(10, $yPos)
$exitBtn.Add_Click({ $form.Close() })
$form.Controls.Add($exitBtn)

# Show the form
[void]$form.ShowDialog()
