local G2L = {};

-- StarterGui.keyinfo
G2L["1"] = Instance.new("ScreenGui", game:GetService("Players").LocalPlayer:WaitForChild("PlayerGui"));
G2L["1"]["Name"] = [[keyinfo]];
G2L["1"]["ZIndexBehavior"] = Enum.ZIndexBehavior.Sibling;


-- StarterGui.keyinfo.main
G2L["2"] = Instance.new("CanvasGroup", G2L["1"]);
G2L["2"]["BorderSizePixel"] = 0;
G2L["2"]["BackgroundColor3"] = Color3.fromRGB(35, 35, 35);
G2L["2"]["Size"] = UDim2.new(0.37542, 0, 0.46319, 0);
G2L["2"]["Position"] = UDim2.new(0.31229, 0, 0.26789, 0);
G2L["2"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["2"]["Name"] = [[main]];


-- StarterGui.keyinfo.main.UICorner
G2L["3"] = Instance.new("UICorner", G2L["2"]);
G2L["3"]["CornerRadius"] = UDim.new(0, 12);


-- StarterGui.keyinfo.main.title
G2L["4"] = Instance.new("TextLabel", G2L["2"]);
G2L["4"]["TextWrapped"] = true;
G2L["4"]["TextStrokeTransparency"] = 0;
G2L["4"]["BorderSizePixel"] = 0;
G2L["4"]["TextScaled"] = true;
G2L["4"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4"]["TextSize"] = 14;
G2L["4"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["4"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["4"]["BackgroundTransparency"] = 1;
G2L["4"]["Size"] = UDim2.new(1, 0, 0.11038, 0);
G2L["4"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["4"]["Text"] = [[Tekkit Key System]];
G2L["4"]["Name"] = [[title]];


-- StarterGui.keyinfo.main.keylabel
G2L["5"] = Instance.new("TextLabel", G2L["2"]);
G2L["5"]["TextWrapped"] = true;
G2L["5"]["TextStrokeTransparency"] = 0;
G2L["5"]["BorderSizePixel"] = 0;
G2L["5"]["TextScaled"] = true;
G2L["5"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5"]["TextSize"] = 14;
G2L["5"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["5"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["5"]["BackgroundTransparency"] = 1;
G2L["5"]["Size"] = UDim2.new(0.29646, 0, 0.06181, 0);
G2L["5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5"]["Text"] = [[Get a Key Here:]];
G2L["5"]["Name"] = [[keylabel]];
G2L["5"]["Position"] = UDim2.new(0.03425, 0, 0.24161, 0);


-- StarterGui.keyinfo.main.execlabel
G2L["6"] = Instance.new("TextLabel", G2L["2"]);
G2L["6"]["TextWrapped"] = true;
G2L["6"]["TextStrokeTransparency"] = 0;
G2L["6"]["BorderSizePixel"] = 0;
G2L["6"]["TextScaled"] = true;
G2L["6"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6"]["TextSize"] = 14;
G2L["6"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["6"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["6"]["BackgroundTransparency"] = 1;
G2L["6"]["Size"] = UDim2.new(0.441, 0, 0.1457, 0);
G2L["6"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6"]["Text"] = [[Once you get a key, replace "key here" with your key, and execute these 2 lines of code:]];
G2L["6"]["Name"] = [[execlabel]];
G2L["6"]["Position"] = UDim2.new(0.02392, 0, 0.46847, 0);


-- StarterGui.keyinfo.main.linkbox
G2L["7"] = Instance.new("TextBox", G2L["2"]);
G2L["7"]["CursorPosition"] = -1;
G2L["7"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7"]["BorderSizePixel"] = 0;
G2L["7"]["TextEditable"] = false;
G2L["7"]["TextWrapped"] = true;
G2L["7"]["TextSize"] = 14;
G2L["7"]["Name"] = [[linkbox]];
G2L["7"]["TextScaled"] = true;
G2L["7"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["7"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["7"]["MultiLine"] = true;
G2L["7"]["ClearTextOnFocus"] = false;
G2L["7"]["Size"] = UDim2.new(0.57375, 0, 0.15673, 0);
G2L["7"]["Position"] = UDim2.new(0.36778, 0, 0.19366, 0);
G2L["7"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["7"]["Text"] = [[https://ads.luarmor.net/get_key?for=AotR_Reward_System-bXIBEmArGqKl]];
G2L["7"]["BackgroundTransparency"] = 0.9;


-- StarterGui.keyinfo.main.linkbox.UICorner
G2L["8"] = Instance.new("UICorner", G2L["7"]);



-- StarterGui.keyinfo.main.linkCopy
G2L["9"] = Instance.new("TextButton", G2L["2"]);
G2L["9"]["TextWrapped"] = true;
G2L["9"]["TextStrokeTransparency"] = 0;
G2L["9"]["BorderSizePixel"] = 0;
G2L["9"]["TextSize"] = 14;
G2L["9"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9"]["TextScaled"] = true;
G2L["9"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["9"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["9"]["Size"] = UDim2.new(0.21829, 0, 0.07285, 0);
G2L["9"]["BackgroundTransparency"] = 0.9;
G2L["9"]["Name"] = [[linkCopy]];
G2L["9"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["9"]["Text"] = [[Copy Link to Clipboard]];
G2L["9"]["Position"] = UDim2.new(0.54572, 0, 0.36424, 0);


-- StarterGui.keyinfo.main.linkCopy.UICorner
G2L["a"] = Instance.new("UICorner", G2L["9"]);



-- StarterGui.keyinfo.main.execbox
G2L["b"] = Instance.new("TextBox", G2L["2"]);
G2L["b"]["SelectionStart"] = 1;
G2L["b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b"]["BorderSizePixel"] = 0;
G2L["b"]["TextEditable"] = false;
G2L["b"]["TextWrapped"] = true;
G2L["b"]["TextSize"] = 14;
G2L["b"]["Name"] = [[execbox]];
G2L["b"]["TextScaled"] = true;
G2L["b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b"]["MultiLine"] = true;
G2L["b"]["ClearTextOnFocus"] = false;
G2L["b"]["Size"] = UDim2.new(0.76106, 0, 0.08609, 0);
G2L["b"]["Position"] = UDim2.new(0.11852, 0, 0.71684, 0);
G2L["b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b"]["Text"] = [[loadstring(game:HttpGet("https://api.luarmor.net/files/v3/loaders/705e7fe7aa288f0fe86900cedb1119b1.lua"))()]];
G2L["b"]["BackgroundTransparency"] = 0.9;


-- StarterGui.keyinfo.main.execbox.UICorner
G2L["c"] = Instance.new("UICorner", G2L["b"]);



-- StarterGui.keyinfo.main.keybox
G2L["d"] = Instance.new("TextBox", G2L["2"]);
G2L["d"]["CursorPosition"] = -1;
G2L["d"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d"]["BorderSizePixel"] = 0;
G2L["d"]["TextEditable"] = false;
G2L["d"]["TextWrapped"] = true;
G2L["d"]["TextSize"] = 14;
G2L["d"]["Name"] = [[keybox]];
G2L["d"]["TextScaled"] = true;
G2L["d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["d"]["ClearTextOnFocus"] = false;
G2L["d"]["Size"] = UDim2.new(0.21091, 0, 0.07506, 0);
G2L["d"]["Position"] = UDim2.new(0.11852, 0, 0.64178, 0);
G2L["d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d"]["Text"] = [[script_key = "key here";]];
G2L["d"]["BackgroundTransparency"] = 0.9;


-- StarterGui.keyinfo.main.keybox.UICorner
G2L["e"] = Instance.new("UICorner", G2L["d"]);



-- StarterGui.keyinfo.main.execCopy
G2L["f"] = Instance.new("TextButton", G2L["2"]);
G2L["f"]["TextWrapped"] = true;
G2L["f"]["TextStrokeTransparency"] = 0;
G2L["f"]["BorderSizePixel"] = 0;
G2L["f"]["TextSize"] = 14;
G2L["f"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f"]["TextScaled"] = true;
G2L["f"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["f"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["f"]["Size"] = UDim2.new(0.21829, 0, 0.07285, 0);
G2L["f"]["BackgroundTransparency"] = 0.9;
G2L["f"]["Name"] = [[execCopy]];
G2L["f"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["f"]["Text"] = [[Copy code to clipboard]];
G2L["f"]["Position"] = UDim2.new(0.38938, 0, 0.8234, 0);


-- StarterGui.keyinfo.main.execCopy.UICorner
G2L["10"] = Instance.new("UICorner", G2L["f"]);



-- StarterGui.keyinfo.main.keylabel
G2L["11"] = Instance.new("TextLabel", G2L["2"]);
G2L["11"]["TextWrapped"] = true;
G2L["11"]["TextStrokeTransparency"] = 0;
G2L["11"]["BorderSizePixel"] = 0;
G2L["11"]["TextScaled"] = true;
G2L["11"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["11"]["TextSize"] = 14;
G2L["11"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["11"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["11"]["BackgroundTransparency"] = 1;
G2L["11"]["Size"] = UDim2.new(0.29646, 0, 0.06181, 0);
G2L["11"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["11"]["Text"] = [[Why is this done? Security.]];
G2L["11"]["Name"] = [[keylabel]];
G2L["11"]["Position"] = UDim2.new(0.03425, 0, 0.91931, 0);


-- StarterGui.keyinfo.main.exampleButton
G2L["12"] = Instance.new("TextButton", G2L["2"]);
G2L["12"]["TextWrapped"] = true;
G2L["12"]["TextStrokeTransparency"] = 0;
G2L["12"]["BorderSizePixel"] = 0;
G2L["12"]["TextSize"] = 14;
G2L["12"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["TextScaled"] = true;
G2L["12"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["12"]["Size"] = UDim2.new(0.21829, 0, 0.07285, 0);
G2L["12"]["BackgroundTransparency"] = 0.9;
G2L["12"]["Name"] = [[exampleButton]];
G2L["12"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["12"]["Text"] = [[Example of Code to Execute.]];
G2L["12"]["Position"] = UDim2.new(0.72271, 0, 0.90728, 0);


-- StarterGui.keyinfo.main.exampleButton.UICorner
G2L["13"] = Instance.new("UICorner", G2L["12"]);



-- StarterGui.keyinfo.main.exampleButton.exampleScript
G2L["14"] = Instance.new("LocalScript", G2L["12"]);
G2L["14"]["Name"] = [[exampleScript]];


-- StarterGui.keyinfo.main.closeButton
G2L["15"] = Instance.new("TextButton", G2L["2"]);
G2L["15"]["TextWrapped"] = true;
G2L["15"]["TextStrokeTransparency"] = 0;
G2L["15"]["BorderSizePixel"] = 0;
G2L["15"]["TextSize"] = 14;
G2L["15"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["15"]["TextScaled"] = true;
G2L["15"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["15"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["15"]["Size"] = UDim2.new(0.0452, 0, 0.0596, 0);
G2L["15"]["BackgroundTransparency"] = 0.9;
G2L["15"]["Name"] = [[closeButton]];
G2L["15"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["15"]["Text"] = [[X]];
G2L["15"]["Position"] = UDim2.new(0.92973, 0, 0.02428, 0);


-- StarterGui.keyinfo.main.closeButton.UICorner
G2L["16"] = Instance.new("UICorner", G2L["15"]);



-- StarterGui.keyinfo.main.closeButton.closeScript
G2L["17"] = Instance.new("LocalScript", G2L["15"]);
G2L["17"]["Name"] = [[closeScript]];


-- StarterGui.keyinfo.example
G2L["18"] = Instance.new("CanvasGroup", G2L["1"]);
G2L["18"]["Visible"] = false;
G2L["18"]["BorderSizePixel"] = 0;
G2L["18"]["BackgroundColor3"] = Color3.fromRGB(35, 35, 35);
G2L["18"]["Size"] = UDim2.new(0.37542, 0, 0.18609, 0);
G2L["18"]["Position"] = UDim2.new(0.31229, 0, 0.73824, 0);
G2L["18"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["18"]["Name"] = [[example]];


-- StarterGui.keyinfo.example.UICorner
G2L["19"] = Instance.new("UICorner", G2L["18"]);



-- StarterGui.keyinfo.example.ImageLabel
G2L["1a"] = Instance.new("ImageLabel", G2L["18"]);
G2L["1a"]["BorderSizePixel"] = 0;
G2L["1a"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["1a"]["Image"] = [[http://www.roblox.com/asset/?id=130161561426431]];
G2L["1a"]["Size"] = UDim2.new(0.97493, 0, 0.92857, 0);
G2L["1a"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["1a"]["BackgroundTransparency"] = 1;
G2L["1a"]["Position"] = UDim2.new(0.01074, 0, 0.035, 0);


-- StarterGui.keyinfo.main.exampleButton.exampleScript
local function C_14()
local script = G2L["14"];
	local button = script.Parent
	local example = script.Parent.Parent.Parent.example
	button.Activated:Connect(function()
		if example.Visible then
			example.Visible = false
		else
			example.Visible = true
		end
	end)
end;
task.spawn(C_14);
-- StarterGui.keyinfo.main.closeButton.closeScript
local function C_17()
local script = G2L["17"];
	local gui = script.Parent.Parent.Parent
	local button = script.Parent
	button.Activated:Connect(function()
		gui:Destroy()
	end)
end;
task.spawn(C_17);

spawn(function()
    return G2L["1"], require;
end)

G2L["9"].Activated:Connect(function()
    setclipboard(G2L["7"].Text)
end)

G2L["f"].Activated:Connect(function()
    setclipboard("script_key = 'KEY HERE';loadstring(game:HttpGet('https://api.luarmor.net/files/v3/loaders/705e7fe7aa288f0fe86900cedb1119b1.lua'))()")
end)
