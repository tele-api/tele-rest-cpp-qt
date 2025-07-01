/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIError.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIError::OAIError(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIError::OAIError() {
    this->initializeModel();
}

OAIError::~OAIError() {}

void OAIError::initializeModel() {

    m_ok_isSet = false;
    m_ok_isValid = false;

    m_error_code_isSet = false;
    m_error_code_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_parameters_isSet = false;
    m_parameters_isValid = false;
}

void OAIError::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIError::fromJsonObject(QJsonObject json) {

    m_ok_isValid = ::tele_rest::fromJsonValue(m_ok, json[QString("ok")]);
    m_ok_isSet = !json[QString("ok")].isNull() && m_ok_isValid;

    m_error_code_isValid = ::tele_rest::fromJsonValue(m_error_code, json[QString("error_code")]);
    m_error_code_isSet = !json[QString("error_code")].isNull() && m_error_code_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_parameters_isValid = ::tele_rest::fromJsonValue(m_parameters, json[QString("parameters")]);
    m_parameters_isSet = !json[QString("parameters")].isNull() && m_parameters_isValid;
}

QString OAIError::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIError::asJsonObject() const {
    QJsonObject obj;
    if (m_ok_isSet) {
        obj.insert(QString("ok"), ::tele_rest::toJsonValue(m_ok));
    }
    if (m_error_code_isSet) {
        obj.insert(QString("error_code"), ::tele_rest::toJsonValue(m_error_code));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_parameters.isSet()) {
        obj.insert(QString("parameters"), ::tele_rest::toJsonValue(m_parameters));
    }
    return obj;
}

bool OAIError::isOk() const {
    return m_ok;
}
void OAIError::setOk(const bool &ok) {
    m_ok = ok;
    m_ok_isSet = true;
}

bool OAIError::is_ok_Set() const{
    return m_ok_isSet;
}

bool OAIError::is_ok_Valid() const{
    return m_ok_isValid;
}

qint32 OAIError::getErrorCode() const {
    return m_error_code;
}
void OAIError::setErrorCode(const qint32 &error_code) {
    m_error_code = error_code;
    m_error_code_isSet = true;
}

bool OAIError::is_error_code_Set() const{
    return m_error_code_isSet;
}

bool OAIError::is_error_code_Valid() const{
    return m_error_code_isValid;
}

QString OAIError::getDescription() const {
    return m_description;
}
void OAIError::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIError::is_description_Set() const{
    return m_description_isSet;
}

bool OAIError::is_description_Valid() const{
    return m_description_isValid;
}

OAIResponseParameters OAIError::getParameters() const {
    return m_parameters;
}
void OAIError::setParameters(const OAIResponseParameters &parameters) {
    m_parameters = parameters;
    m_parameters_isSet = true;
}

bool OAIError::is_parameters_Set() const{
    return m_parameters_isSet;
}

bool OAIError::is_parameters_Valid() const{
    return m_parameters_isValid;
}

bool OAIError::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ok_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_error_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_parameters.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIError::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ok_isValid && m_error_code_isValid && m_description_isValid && true;
}

} // namespace tele_rest
