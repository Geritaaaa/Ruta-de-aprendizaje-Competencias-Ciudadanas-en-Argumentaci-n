<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <title>Ruta Formativa - Competencias Ciudadanas en Argumentación</title>
    <style>
        :root {
            --primary-color: #2563eb;
            --secondary-color: #1e40af;
            --text-color: #1f2937;
            --bg-light: #f3f4f6;
        }
        
        body {
            font-family: system-ui, -apple-system, sans-serif;
            line-height: 1.6;
            color: var(--text-color);
            margin: 0;
            padding: 0;
        }

        .header {
            background: var(--primary-color);
            color: white;
            padding: 2rem;
            text-align: center;
        }

        .container {
            max-width: 1200px;
            margin: 0 auto;
            padding: 2rem;
        }

        .section {
            background: white;
            border-radius: 8px;
            padding: 2rem;
            margin-bottom: 2rem;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
        }

        .progress-bar {
            width: 100%;
            height: 20px;
            background: var(--bg-light);
            border-radius: 10px;
            margin: 1rem 0;
        }

        .progress {
            width: 0%;
            height: 100%;
            background: var(--primary-color);
            border-radius: 10px;
            transition: width 0.3s ease;
        }

        .btn {
            background: var(--primary-color);
            color: white;
            padding: 0.5rem 1rem;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            margin: 0.5rem;
        }

        .btn:hover {
            background: var(--secondary-color);
        }

        .activity {
            background: var(--bg-light);
            padding: 1rem;
            border-radius: 4px;
            margin: 1rem 0;
        }
    </style>
</head>
<body>
    <div class="header">
        <h1>Competencias Ciudadanas en Argumentación</h1>
        <p>Desarrolla tu capacidad de análisis y evaluación de argumentos</p>
    </div>

    <div class="container">
        <div class="section">
            <h2>1. Identificación de la Competencia</h2>
            <p><strong>Competencia:</strong> Argumentación en contextos ciudadanos</p>
            <p><strong>Descripción:</strong> Capacidad para analizar y evaluar la pertinencia y solidez de enunciados o discursos relacionados con problemáticas sociales.</p>
            <p><strong>Evidencia de desempeño previo:</strong> Los estudiantes muestran dificultades para:</p>
            <ul>
                <li>Identificar falacias argumentativas</li>
                <li>Distinguir entre hechos y opiniones</li>
                <li>Evaluar la calidad de las fuentes de información</li>
            </ul>
        </div>

        <div class="section">
            <h2>2. Objetivos de Aprendizaje</h2>
            <p>Al finalizar esta ruta formativa, serás capaz de:</p>
            <ul>
                <li>Identificar los elementos básicos de un argumento (premisas, conclusiones, supuestos)</li>
                <li>Evaluar la validez lógica de diferentes tipos de argumentos</li>
                <li>Reconocer y analizar falacias argumentativas comunes</li>
                <li>Construir argumentos sólidos basados en evidencia</li>
                <li>Analizar críticamente discursos sobre problemáticas sociales</li>
            </ul>
        </div>

        <div class="section">
            <h2>3. Metodología y Estrategias de Aprendizaje</h2>
            
            <h3>Herramientas Digitales</h3>
            <div class="activity">
                <h4>Módulo 1: Fundamentos de la Argumentación</h4>
                <ul>
                    <li>Video interactivo sobre estructura argumentativa</li>
                    <li>Quiz de identificación de premisas y conclusiones</li>
                    <li>Foro de discusión sobre casos prácticos</li>
                </ul>
                <button class="btn" onclick="updateProgress(25)">Completar Módulo 1</button>
            </div>

            <div class="activity">
                <h4>Módulo 2: Análisis de Argumentos</h4>
                <ul>
                    <li>Simulador de debates</li>
                    <li>Ejercicios de identificación de falacias</li>
                    <li>Taller virtual de construcción de argumentos</li>
                </ul>
                <button class="btn" onclick="updateProgress(50)">Completar Módulo 2</button>
            </div>

            <div class="activity">
                <h4>Módulo 3: Argumentación en Contextos Sociales</h4>
                <ul>
                    <li>Análisis de casos de problemáticas sociales actuales</li>
                    <li>Ejercicios de fact-checking</li>
                    <li>Proyecto colaborativo de investigación</li>
                </ul>
                <button class="btn" onclick="updateProgress(75)">Completar Módulo 3</button>
            </div>
        </div>

        <div class="section">
            <h2>4. Evaluación del Aprendizaje</h2>
            <h3>Tu Progreso</h3>
            <div class="progress-bar">
                <div id="progress" class="progress"></div>
            </div>

            <h3>Mecanismos de Evaluación</h3>
            <ul>
                <li><strong>Evaluación Diagnóstica:</strong> Test inicial para identificar nivel de entrada</li>
                <li><strong>Evaluación Formativa:</strong> Quizes al final de cada módulo</li>
                <li><strong>Autoevaluación:</strong> Rúbricas de análisis argumentativo</li>
                <li><strong>Evaluación Final:</strong> Proyecto de análisis de una problemática social</li>
            </ul>

            <h3>Prueba de Simulación</h3>
            <button class="btn" onclick="alert('Iniciando simulación de prueba...')">Realizar Simulacro</button>
        </div>
    </div>

    <script>
        function updateProgress(percentage) {
            document.getElementById('progress').style.width = percentage + '%';
        }
    </script>
</body>
</html>
