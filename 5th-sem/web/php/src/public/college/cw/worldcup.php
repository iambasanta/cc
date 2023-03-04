<?php
$matches = [
    [
        "team_name" => "Argentina",
        "goals_scored" => 3,
        "goals_conceded" => 1,
        "opponent_team" => "France",
        "win_status" => true,
    ],
    [
        "team_name" => "Croatia",
        "goals_scored" => 2,
        "goals_conceded" => 1,
        "opponent_team" => "Morocco",
        "win_status" => true,
    ],
    [
        "team_name" => "South Korea",
        "goals_scored" => 1,
        "goals_conceded" => 2,
        "opponent_team" => "Brazil",
        "win_status" => false,
    ],
];
?>

<!doctype html>
<html>
    <head>
    <title>World cup status</title>
</head>
<body>
    <table style="border: 1px; width: 100%; text-align: left;">
        <tr>
            <th>Team name</th>
            <th>Goals scored</th>
            <th>Goals conceded</th>
            <th>Opponent team</th>
        </tr>
        <?php foreach($matches as $match) : ?>
        <tr>
            <td style="<?= $match['win_status'] ? "color:green;" : "color:red;" ?>"><?= $match['team_name'] ?></td>
            <td><?= $match['goals_scored'] ?></td>
            <td><?= $match['goals_conceded'] ?></td>
            <td><?= $match['opponent_team'] ?></td>
        </tr>
        <?php endforeach; ?>
    </table>
</body>
</html>
