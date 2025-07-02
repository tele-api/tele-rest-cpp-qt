/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
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

#include "OAIReopenForumTopicResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIReopenForumTopicResponse::OAIReopenForumTopicResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIReopenForumTopicResponse::OAIReopenForumTopicResponse() {
    this->initializeModel();
}

OAIReopenForumTopicResponse::~OAIReopenForumTopicResponse() {}

void OAIReopenForumTopicResponse::initializeModel() {

    m_ok_isSet = false;
    m_ok_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;
}

void OAIReopenForumTopicResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIReopenForumTopicResponse::fromJsonObject(QJsonObject json) {

    m_ok_isValid = ::tele_rest::fromJsonValue(m_ok, json[QString("ok")]);
    m_ok_isSet = !json[QString("ok")].isNull() && m_ok_isValid;

    m_result_isValid = ::tele_rest::fromJsonValue(m_result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;
}

QString OAIReopenForumTopicResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIReopenForumTopicResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_ok_isSet) {
        obj.insert(QString("ok"), ::tele_rest::toJsonValue(m_ok));
    }
    if (m_result_isSet) {
        obj.insert(QString("result"), ::tele_rest::toJsonValue(m_result));
    }
    return obj;
}

bool OAIReopenForumTopicResponse::isOk() const {
    return m_ok;
}
void OAIReopenForumTopicResponse::setOk(const bool &ok) {
    m_ok = ok;
    m_ok_isSet = true;
}

bool OAIReopenForumTopicResponse::is_ok_Set() const{
    return m_ok_isSet;
}

bool OAIReopenForumTopicResponse::is_ok_Valid() const{
    return m_ok_isValid;
}

bool OAIReopenForumTopicResponse::isResult() const {
    return m_result;
}
void OAIReopenForumTopicResponse::setResult(const bool &result) {
    m_result = result;
    m_result_isSet = true;
}

bool OAIReopenForumTopicResponse::is_result_Set() const{
    return m_result_isSet;
}

bool OAIReopenForumTopicResponse::is_result_Valid() const{
    return m_result_isValid;
}

bool OAIReopenForumTopicResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_ok_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIReopenForumTopicResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_ok_isValid && m_result_isValid && true;
}

} // namespace tele_rest
