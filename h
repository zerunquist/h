if game:IsLoaded() then
    print("-")
else
    game.Loaded:Wait()
end

while task.wait(1) do
    if not pcall(function() return game.Players.LocalPlayer.Character.Main.W end) then
        game:GetService("StarterGui"):SetCore("SendNotification", {
            Title = "Not in mission",
            Text = "Player not found, join the lobby or a mission.",
        })
    else
        wait(0.2)
        break
    end
end

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
G2L["5"]["Size"] = UDim2.new(0.33354, 0, 0.09272, 0);
G2L["5"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["5"]["Text"] = [[Get a Key Here: (Free only)]];
G2L["5"]["Name"] = [[keylabel]];
G2L["5"]["Position"] = UDim2.new(0.01505, 0, 0.28355, 0);


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
G2L["6"]["Size"] = UDim2.new(0.951, 0, 0.10817, 0);
G2L["6"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["6"]["Text"] = [[Once you get a key, put your key in the appropriate text box, and execute it with the button below.]];
G2L["6"]["Name"] = [[execlabel]];
G2L["6"]["Position"] = UDim2.new(0.02392, 0, 0.506, 0);


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
G2L["7"]["Position"] = UDim2.new(0.36641, 0, 0.25326, 0);
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
G2L["9"]["Position"] = UDim2.new(0.54435, 0, 0.43267, 0);


-- StarterGui.keyinfo.main.linkCopy.UICorner
G2L["a"] = Instance.new("UICorner", G2L["9"]);



-- StarterGui.keyinfo.main.freeBox
G2L["b"] = Instance.new("TextBox", G2L["2"]);
G2L["b"]["CursorPosition"] = -1;
G2L["b"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b"]["BorderSizePixel"] = 0;
G2L["b"]["TextWrapped"] = true;
G2L["b"]["TextSize"] = 14;
G2L["b"]["Name"] = [[freeBox]];
G2L["b"]["TextScaled"] = true;
G2L["b"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["b"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["b"]["Size"] = UDim2.new(0.46313, 0, 0.15011, 0);
G2L["b"]["Position"] = UDim2.new(0.03297, 0, 0.62633, 0);
G2L["b"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["b"]["Text"] = [[]];
G2L["b"]["BackgroundTransparency"] = 0.9;


-- StarterGui.keyinfo.main.freeBox.UICorner
G2L["c"] = Instance.new("UICorner", G2L["b"]);



-- StarterGui.keyinfo.main.secLabel
G2L["d"] = Instance.new("TextLabel", G2L["2"]);
G2L["d"]["TextWrapped"] = true;
G2L["d"]["TextStrokeTransparency"] = 0;
G2L["d"]["BorderSizePixel"] = 0;
G2L["d"]["TextScaled"] = true;
G2L["d"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d"]["TextSize"] = 14;
G2L["d"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["d"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["d"]["BackgroundTransparency"] = 1;
G2L["d"]["Size"] = UDim2.new(0.29646, 0, 0.06181, 0);
G2L["d"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["d"]["Text"] = [[It is made this way for security and functionality :)]];
G2L["d"]["Name"] = [[secLabel]];
G2L["d"]["Position"] = UDim2.new(0.03425, 0, 0.91931, 0);


-- StarterGui.keyinfo.main.execButton
G2L["e"] = Instance.new("TextButton", G2L["2"]);
G2L["e"]["TextWrapped"] = true;
G2L["e"]["TextStrokeTransparency"] = 0;
G2L["e"]["BorderSizePixel"] = 0;
G2L["e"]["TextSize"] = 14;
G2L["e"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e"]["TextScaled"] = true;
G2L["e"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["e"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["e"]["Size"] = UDim2.new(0.21829, 0, 0.07285, 0);
G2L["e"]["BackgroundTransparency"] = 0.9;
G2L["e"]["Name"] = [[execButton]];
G2L["e"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["e"]["Text"] = [[Execute script with inputed key]];
G2L["e"]["Position"] = UDim2.new(0.72271, 0, 0.90728, 0);


-- StarterGui.keyinfo.main.execButton.UICorner
G2L["f"] = Instance.new("UICorner", G2L["e"]);



-- StarterGui.keyinfo.main.closeButton
G2L["10"] = Instance.new("TextButton", G2L["2"]);
G2L["10"]["TextWrapped"] = true;
G2L["10"]["TextStrokeTransparency"] = 0;
G2L["10"]["BorderSizePixel"] = 0;
G2L["10"]["TextSize"] = 14;
G2L["10"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["10"]["TextScaled"] = true;
G2L["10"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["10"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["10"]["Size"] = UDim2.new(0.0452, 0, 0.0596, 0);
G2L["10"]["BackgroundTransparency"] = 0.9;
G2L["10"]["Name"] = [[closeButton]];
G2L["10"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["10"]["Text"] = [[X]];
G2L["10"]["Position"] = UDim2.new(0.92973, 0, 0.02428, 0);


-- StarterGui.keyinfo.main.closeButton.UICorner
G2L["11"] = Instance.new("UICorner", G2L["10"]);



-- StarterGui.keyinfo.main.freeLabel
G2L["12"] = Instance.new("TextLabel", G2L["2"]);
G2L["12"]["TextWrapped"] = true;
G2L["12"]["TextStrokeTransparency"] = 0;
G2L["12"]["BorderSizePixel"] = 0;
G2L["12"]["TextScaled"] = true;
G2L["12"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["TextSize"] = 14;
G2L["12"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["12"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["12"]["BackgroundTransparency"] = 1;
G2L["12"]["Size"] = UDim2.new(0.29646, 0, 0.06181, 0);
G2L["12"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["12"]["Text"] = [[Free Key Box]];
G2L["12"]["Name"] = [[freeLabel]];
G2L["12"]["Position"] = UDim2.new(0.11537, 0, 0.77583, 0);


-- StarterGui.keyinfo.main.premLabel
G2L["13"] = Instance.new("TextLabel", G2L["2"]);
G2L["13"]["TextWrapped"] = true;
G2L["13"]["TextStrokeTransparency"] = 0;
G2L["13"]["BorderSizePixel"] = 0;
G2L["13"]["TextScaled"] = true;
G2L["13"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["13"]["TextSize"] = 14;
G2L["13"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["13"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["13"]["BackgroundTransparency"] = 1;
G2L["13"]["Size"] = UDim2.new(0.29646, 0, 0.06181, 0);
G2L["13"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["13"]["Text"] = [[Premium Key Box]];
G2L["13"]["Name"] = [[premLabel]];
G2L["13"]["Position"] = UDim2.new(0.58587, 0, 0.77583, 0);


-- StarterGui.keyinfo.main.autoexecButton
G2L["14"] = Instance.new("TextButton", G2L["2"]);
G2L["14"]["TextWrapped"] = true;
G2L["14"]["TextStrokeTransparency"] = 0;
G2L["14"]["BorderSizePixel"] = 0;
G2L["14"]["TextSize"] = 14;
G2L["14"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["14"]["TextScaled"] = true;
G2L["14"]["BackgroundColor3"] = Color3.fromRGB(171, 0, 0);
G2L["14"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["14"]["Size"] = UDim2.new(0.20059, 0, 0.07064, 0);
G2L["14"]["Name"] = [[autoexecButton]];
G2L["14"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["14"]["Text"] = [[Auto-Exec Key?]];
G2L["14"]["Position"] = UDim2.new(0.03245, 0, 0.03974, 0);


-- StarterGui.keyinfo.main.autoexecButton.UICorner
G2L["15"] = Instance.new("UICorner", G2L["14"]);



-- StarterGui.keyinfo.main.premBox
G2L["16"] = Instance.new("TextBox", G2L["2"]);
G2L["16"]["CursorPosition"] = -1;
G2L["16"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["16"]["BorderSizePixel"] = 0;
G2L["16"]["TextWrapped"] = true;
G2L["16"]["TextSize"] = 14;
G2L["16"]["Name"] = [[premBox]];
G2L["16"]["TextScaled"] = true;
G2L["16"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["16"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["16"]["Size"] = UDim2.new(0.46313, 0, 0.15011, 0);
G2L["16"]["Position"] = UDim2.new(0.4961, 0, 0.62633, 0);
G2L["16"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["16"]["Text"] = [[]];
G2L["16"]["BackgroundTransparency"] = 0.9;


-- StarterGui.keyinfo.main.premBox.UICorner
G2L["17"] = Instance.new("UICorner", G2L["16"]);



-- StarterGui.keyinfo.main.buyerLabel
G2L["18"] = Instance.new("TextLabel", G2L["2"]);
G2L["18"]["TextWrapped"] = true;
G2L["18"]["TextStrokeTransparency"] = 0;
G2L["18"]["BorderSizePixel"] = 0;
G2L["18"]["TextScaled"] = true;
G2L["18"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["18"]["TextSize"] = 14;
G2L["18"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Bold, Enum.FontStyle.Normal);
G2L["18"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["18"]["BackgroundTransparency"] = 1;
G2L["18"]["Size"] = UDim2.new(0.44315, 0, 0.07726, 0);
G2L["18"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["18"]["Text"] = [[(Buyers must use discord for keys)]];
G2L["18"]["Name"] = [[buyerLabel]];
G2L["18"]["Position"] = UDim2.new(0.01419, 0, 0.14227, 0);


-- StarterGui.keyinfo.main.discordbox
G2L["19"] = Instance.new("TextBox", G2L["2"]);
G2L["19"]["CursorPosition"] = -1;
G2L["19"]["TextColor3"] = Color3.fromRGB(255, 255, 255);
G2L["19"]["BorderSizePixel"] = 0;
G2L["19"]["TextEditable"] = false;
G2L["19"]["TextWrapped"] = true;
G2L["19"]["TextSize"] = 14;
G2L["19"]["Name"] = [[discordbox]];
G2L["19"]["TextScaled"] = true;
G2L["19"]["BackgroundColor3"] = Color3.fromRGB(255, 255, 255);
G2L["19"]["FontFace"] = Font.new([[rbxasset://fonts/families/SourceSansPro.json]], Enum.FontWeight.Regular, Enum.FontStyle.Normal);
G2L["19"]["MultiLine"] = true;
G2L["19"]["ClearTextOnFocus"] = false;
G2L["19"]["Size"] = UDim2.new(0.48419, 0, 0.0845, 0);
G2L["19"]["Position"] = UDim2.new(0.45597, 0, 0.14227, 0);
G2L["19"]["BorderColor3"] = Color3.fromRGB(0, 0, 0);
G2L["19"]["Text"] = [[https://discord.gg/CXFxhXShwt]];
G2L["19"]["BackgroundTransparency"] = 0.9;

-- StarterGui.keyinfo.main.discordbox.UICorner
G2L["1a"] = Instance.new("UICorner", G2L["19"]);

spawn(function()
	return G2L["1"], require;
end)

local function sendNotification(title, text)
    game:GetService("StarterGui"):SetCore("SendNotification", {
        Title = title,
        Text = text,
    })
end

local HttpService = game:GetService("HttpService")
local basePath = "tekkit"

local v = {
	key,
	premium = false,
	autoexec = false
}

function saveVariables(basePath, v)
    local filePath = basePath .. "/savedkey.txt"

    if not writefile then
        print("Error: writefile function is not defined")
        return
    end

    local jsonString = game:GetService("HttpService"):JSONEncode(v)
    writefile(filePath, jsonString)
end

function loadVariables(basePath)
    local filePath = basePath .. "/savedkey.txt"

    if not isfile then
        print("Error: isfile function is not defined")
        return {}
    end

    if isfile(filePath) then
        if not readfile then
            print("Error: readfile function is not defined")
            return {}
        end

        local jsonString = readfile(filePath)

        local httpService = game:GetService("HttpService")
        if not httpService then
            print("Error: HttpService is not available")
            return {}
        end

        local success, variables = pcall(function()
            return httpService:JSONDecode(jsonString)
        end)

        if not success then
            print("Error: Could not parse JSON. Resetting saved variables.")
            saveVariables(basePath, {})
            return {}
        end

        return variables
    else
        return {}
    end
end

if not isfolder(basePath) then
    if not makefolder then
        print("Error: makefolder function is not defined")
    else
        makefolder(basePath)
    end
end

local loadedVariables = loadVariables(basePath)
print("Variables loaded successfully")

v.key = loadedVariables.key or v.key
v.premium = loadedVariables.premium or v.premium
v.autoexec = loadedVariables.autoexec or v.autoexec

function execute()
	local stringToExecute
	if G2L["16"].Text ~= "" and G2L["16"].Text ~= nil then
		v.key = G2L["16"].Text
		v.premium = true
		saveVariables(basePath, v)
	elseif G2L["b"].Text ~= "" and G2L["b"].Text ~= nil then
		v.key = G2L["b"].Text
		v.premium = false
		saveVariables(basePath, v)
	end
	wait(0.1)

	if v.premium then
		stringToExecute = "script_key = '" .. v.key .. "'\n" ..
			"loadstring(game:HttpGet('https://api.luarmor.net/files/v3/loaders/d99eeb73242d36b0c858a9615f7c8167.lua'))()"
	else
		stringToExecute = "script_key = '" .. v.key .. "'\n" ..
			"loadstring(game:HttpGet('https://api.luarmor.net/files/v3/loaders/705e7fe7aa288f0fe86900cedb1119b1.lua'))()"
	end
	
	spawn(function()
		loadstring(stringToExecute)()
	end)
	
	print("Executed")
	G2L["1"]:Destroy()
	saveVariables(basePath, v)
end



function autoexec()
	local starttime = tick()
	
	while v.autoexec do
		local elapsed = tick() - starttime
		
		if elapsed >= 0 and elapsed < 1 then
			G2L["14"].Text = "Autoexecuting in 3.."
		elseif elapsed >= 1 and elapsed < 2 then
			G2L["14"].Text = "Autoexecuting in 2.."
		elseif elapsed >= 2 and elapsed < 3 then
			G2L["14"].Text = "Autoexecuting in 1.."
		elseif elapsed >= 3 then
			G2L["14"].Text = "Autoexecuting..."
			coroutine.wrap(execute)()
			break
		end

		wait(0.05)
	end
end

if v.key ~= nil and type(v.key) == "string" then
	if v.premium then
		G2L["16"].Text = v.key
	else
		G2L["b"].Text = v.key
	end
else
	print("Key isn't saved or isn't a string")
end


if v.autoexec and v.key ~= nil then
	G2L["14"].BackgroundColor3 = Color3.new(0,1,0)
	coroutine.wrap(autoexec)()
end


G2L["e"].Activated:Connect(function ()
	coroutine.wrap(execute)()
end)


G2L["9"].Activated:Connect(function ()
	setclipboard(G2L["7"].Text)
end)


G2L["10"].Activated:Connect(function ()
	G2L["1"]:Destroy()
	saveVariables(basePath, v)
end)

G2L["14"].Activated:Connect(function ()
	v.autoexec = not v.autoexec
	if v.autoexec then
		G2L["14"].BackgroundColor3 = Color3.new(0,1,0)
	else
		G2L["14"].BackgroundColor3 = Color3.new(1,0,0)
		G2L["14"].Text = "AutoExec Stopped."
		wait(1)
		G2L["14"].Text = "Auto-Exec Key?"
	end
	coroutine.wrap(autoexec)()
end)
