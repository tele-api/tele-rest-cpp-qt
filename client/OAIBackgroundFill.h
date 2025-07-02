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

/*
 * OAIBackgroundFill.h
 *
 * This object describes the way a background is filled based on the selected colors. Currently, it can be one of  * [BackgroundFillSolid](https://core.telegram.org/bots/api/#backgroundfillsolid) * [BackgroundFillGradient](https://core.telegram.org/bots/api/#backgroundfillgradient) * [BackgroundFillFreeformGradient](https://core.telegram.org/bots/api/#backgroundfillfreeformgradient)
 */

#ifndef OAIBackgroundFill_H
#define OAIBackgroundFill_H

#include <QJsonObject>

#include "OAIBackgroundFillFreeformGradient.h"
#include "OAIBackgroundFillGradient.h"
#include "OAIBackgroundFillSolid.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIBackgroundFill : public OAIObject {
public:
    OAIBackgroundFill();
    OAIBackgroundFill(QString json);
    ~OAIBackgroundFill() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getType() const;
    void setType(const QString &type);
    bool is_type_Set() const;
    bool is_type_Valid() const;

    qint32 getColor() const;
    void setColor(const qint32 &color);
    bool is_color_Set() const;
    bool is_color_Valid() const;

    qint32 getTopColor() const;
    void setTopColor(const qint32 &top_color);
    bool is_top_color_Set() const;
    bool is_top_color_Valid() const;

    qint32 getBottomColor() const;
    void setBottomColor(const qint32 &bottom_color);
    bool is_bottom_color_Set() const;
    bool is_bottom_color_Valid() const;

    qint32 getRotationAngle() const;
    void setRotationAngle(const qint32 &rotation_angle);
    bool is_rotation_angle_Set() const;
    bool is_rotation_angle_Valid() const;

    QList<qint32> getColors() const;
    void setColors(const QList<qint32> &colors);
    bool is_colors_Set() const;
    bool is_colors_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_type;
    bool m_type_isSet;
    bool m_type_isValid;

    qint32 m_color;
    bool m_color_isSet;
    bool m_color_isValid;

    qint32 m_top_color;
    bool m_top_color_isSet;
    bool m_top_color_isValid;

    qint32 m_bottom_color;
    bool m_bottom_color_isSet;
    bool m_bottom_color_isValid;

    qint32 m_rotation_angle;
    bool m_rotation_angle_isSet;
    bool m_rotation_angle_isValid;

    QList<qint32> m_colors;
    bool m_colors_isSet;
    bool m_colors_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIBackgroundFill)

#endif // OAIBackgroundFill_H
