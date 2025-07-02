/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIPost_answerWebAppQuery_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPost_answerWebAppQuery_request::OAIPost_answerWebAppQuery_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPost_answerWebAppQuery_request::OAIPost_answerWebAppQuery_request() {
    this->initializeModel();
}

OAIPost_answerWebAppQuery_request::~OAIPost_answerWebAppQuery_request() {}

void OAIPost_answerWebAppQuery_request::initializeModel() {

    m_web_app_query_id_isSet = false;
    m_web_app_query_id_isValid = false;

    m_result_isSet = false;
    m_result_isValid = false;
}

void OAIPost_answerWebAppQuery_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPost_answerWebAppQuery_request::fromJsonObject(QJsonObject json) {

    m_web_app_query_id_isValid = ::tele_rest::fromJsonValue(m_web_app_query_id, json[QString("web_app_query_id")]);
    m_web_app_query_id_isSet = !json[QString("web_app_query_id")].isNull() && m_web_app_query_id_isValid;

    m_result_isValid = ::tele_rest::fromJsonValue(m_result, json[QString("result")]);
    m_result_isSet = !json[QString("result")].isNull() && m_result_isValid;
}

QString OAIPost_answerWebAppQuery_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPost_answerWebAppQuery_request::asJsonObject() const {
    QJsonObject obj;
    if (m_web_app_query_id_isSet) {
        obj.insert(QString("web_app_query_id"), ::tele_rest::toJsonValue(m_web_app_query_id));
    }
    if (m_result.isSet()) {
        obj.insert(QString("result"), ::tele_rest::toJsonValue(m_result));
    }
    return obj;
}

QString OAIPost_answerWebAppQuery_request::getWebAppQueryId() const {
    return m_web_app_query_id;
}
void OAIPost_answerWebAppQuery_request::setWebAppQueryId(const QString &web_app_query_id) {
    m_web_app_query_id = web_app_query_id;
    m_web_app_query_id_isSet = true;
}

bool OAIPost_answerWebAppQuery_request::is_web_app_query_id_Set() const{
    return m_web_app_query_id_isSet;
}

bool OAIPost_answerWebAppQuery_request::is_web_app_query_id_Valid() const{
    return m_web_app_query_id_isValid;
}

OAIInlineQueryResult OAIPost_answerWebAppQuery_request::getResult() const {
    return m_result;
}
void OAIPost_answerWebAppQuery_request::setResult(const OAIInlineQueryResult &result) {
    m_result = result;
    m_result_isSet = true;
}

bool OAIPost_answerWebAppQuery_request::is_result_Set() const{
    return m_result_isSet;
}

bool OAIPost_answerWebAppQuery_request::is_result_Valid() const{
    return m_result_isValid;
}

bool OAIPost_answerWebAppQuery_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_web_app_query_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_result.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPost_answerWebAppQuery_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_web_app_query_id_isValid && m_result_isValid && true;
}

} // namespace tele_rest
